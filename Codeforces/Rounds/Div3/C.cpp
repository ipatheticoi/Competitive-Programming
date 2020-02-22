#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t, n, a,b,c, aux;
    cin>>t;

    while(t--){
        cin>>n;
        a = 0;
        b = 0;
        c = 0;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0 && n/i != a){
                if(a == 0) {a = i; n/=i;}
                else if (n%i == 0 &&i != n/i){b = i; c = n/i; break;}
            }
        } 
        if(a!=0 &&b!=0 && c!=0) {cout<<"YES"<<endl; cout<<a<<" "<<b<<" "<<c<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0;
}