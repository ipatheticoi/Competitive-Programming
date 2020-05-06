#include <bits/stdc++.h>
typedef long long ll; 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define forr(i, x) for(ll i = 0; i < x; i++)
#define pb(x) push_back(x)
#define mp make_pair
#define minimum(a)	*min_element(a.begin(), a.end())
#define maximum(a)	*max_element(a.begin(), a.end())

using namespace std;
int fact(int n); 
  
int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  
// Returns factorial of n 
int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++){
        int n;
        cin>>n;
        cout<<"Case #"<<tc<<":"<<endl;
        /*if(n <= 500){
            for(int i = 1; i <=n ; i++)
            cout<<i<<" "<<1<<endl;
        }
        else if (n==501) {
            cout<<"1 1"<<endl;
            cout<<"2 1"<<endl;
            cout<<"3 2"<<endl;
        for(int i = 3; i <= n-2 ; i++){
            cout<<i<<" "<<1<<endl;
            }

        }*/
        if(n==1){
            cout<<"1 1"<<endl;
        }
        else if(n==2){
            cout<<"1 1"<<endl;
            cout<<"2 1"<<endl;
        }
        else if (n==3){
            cout<<"1 1"<<endl;
            cout<<"2 1"<<endl;
            cout<<"2 2"<<endl;
        }
        else if (n==4){
            cout<<"1 1"<<endl;
            cout<<"2 1"<<endl;
            cout<<"3 2"<<endl;
        }
        else{
            long long sum = 0;
            vector <long long> tri, tri2;
            tri.push_back(0);
            for(long long i = 1; i <= 600; i++){
                tri.push_back(tri.back()+i);
            }
            tri2.push_back(0);
            for(long long i = 1; i <= 600; i++){
                tri2.push_back(tri.back()+i);
            }
            cout<<"1 1"<<endl;
            cout<<"2 1"<<endl;
            sum +=2;
            long long lo = upper_bound(tri.begin(),tri.end(), n-2) - tri.begin()-1;
            //cout<<lo-1<<"x"<<tri[lo-1]<<endl;
            for(long long i = 0; i < lo; i++){
                cout<<i+2<<" 2\n";
                //cout<<"mierda"<<nCr(i+2-1, 2)<<endl;
                //sum += nCr(i+2-1, 1);
            }
            for(long long i = 0; i < n-2-tri[lo]; i++){
                cout<<i+lo+1<<" 1\n";
                //sum += nCr(i+lo, 0);
            }
            //cout<<"suma "<<sum<<endl;
        }
    }
    return 0;
}