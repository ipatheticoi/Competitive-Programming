#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, a;
    bool par[100005];
    long long ans = 0;
    vector <long long> av;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        ans += a%2==0?a-1:a; 
        av.push_back(a%2==0?a-1:a);
    }
    sort(av.begin(), av.end());
    if(n%2 == 0) ans -= av[0];
    cout<<ans<<endl;
    return 0;
}