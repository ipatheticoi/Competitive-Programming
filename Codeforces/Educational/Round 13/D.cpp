#include <bits/stdc++.h>
using namespace std;
const long long prim = 1e9 + 7;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, a, b, x;
    cin>>a>>b>>n>>x;
    while(n > 0){
        if(n % 2){x = (a * x + b) % prim;}
        b *= (a + 1); 
        b %= prim;
        a *= a; 
        a %= prim;
        n /= 2;
    }
    cout<<x<<endl;
    return 0;
}