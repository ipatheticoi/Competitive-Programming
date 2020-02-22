#include <bits/stdc++.h>
using namespace std;
long long fastexp(int a, int n, int p){
    if(n==0) return 1;
    if(n==1) return a%p;
    if(n%2 == 1){
        long long aux = fastexp(a,n/2,p)%p;
        return (1LL*aux*aux)%p;
    }
    long long aux = fastexp(a,(n-1)/2,p)%p;
    return (1LL*aux*aux*a)%p;
}
long long invmod(int a, int p){
    return fastexp(a,p-2,p)%p;
}
int main(){
	int t;
    ifstream cin("hawawshi.in");
    cin >> t;
    while(t--){
        int n, x, A, B, a, b, p;
        cin >> n >> x >> A >> B >> a >> b >> p;
        int answ = 0;
        if(a == 1){
        	//int answ = 0;
        	for(int i=A; i<=B; i++){
        		int aux = ((x-i)/b)%p;
        		if(aux <= n){
        			answ++;
        		}
        	}
        } 
        else{
        	int aux = floor(sqrt(1.0*p));
        	map <int,int> pota;
        	int wath[aux+1];
        	pota[1] = 0;
        	wath[0] = 1;
        	for(int i=1; i<aux+1; i++){
        		wath[i] = (wath[i-1]*a)%p;
        		pota[wath[i]] = i;
        	}
        	for(int i=A; i<=B; i++){
        		if(i == (b/(1-a))%p){
        			if(i == x) answ++;
        		}
        		else{
        			for(int j=0; j<aux; j++){
        				int q = j;
                        int d = (x+b*invmod(a-1,p))%p;
                        d = d*invmod(i+b*invmod(a-1,p),p);
                        cout << "El numero es " << i+b*invmod(a-1,p) << endl;
                        cout << "El inverso" << invmod(i+b*invmod(a-1,p),p) << endl;
                        //d = (d*invmod(i-(b/(1-a)),p))%p;
        				int gg = (d*invmod(fastexp(a,q*aux,p),p))%p;
        				int r = pota[gg];
                        cout << gg << " " << i << endl;
                        if(r > aux and fastexp(a,r,p)!=d) continue;
        				if(n <= q*aux+r){
                            cout << q*aux+r << " " << i << endl;
                            answ++;
                        }
        			}
        		}
        	}	
        }
        //cout << answ << " " << (B-A+1) << endl;
        int gc = __gcd(answ,B-A+1);
        cout << answ/gc << "/"<< (B-A+1)/gc << '\n'; 
    }
    return 0;
}