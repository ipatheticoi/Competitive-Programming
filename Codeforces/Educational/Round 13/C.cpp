#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;
    long long mcm = a*b/__gcd(a,b);
    cout<<max(n/a*p + (n/b - n/(mcm))*q, (n/a - n/(mcm))*p + (n/b)*q)<<endl;


    return 0;
}