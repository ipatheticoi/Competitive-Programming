#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    long long int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        long long  ans = 0;
        ans = n*(n+1)/2;
        long long minus;
        //cout<<__builtin_clz(n)<<endl;
        minus = (1LL << (32 -__builtin_clz(n)))-1;
        //cout<<ans<<" ";
        ans -= 2*minus;
        cout<<ans<<endl;
    }
    return 0;
}