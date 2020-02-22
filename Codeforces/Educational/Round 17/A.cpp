#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main(){
    long long n, k;
    cin>>n>>k;
    vector <long long> ans;
    for(long long  i = 1; i*i <= n ; i++){
        if (n%i == 0){
            ans.push_back(i);
            if(i*i != n)
                ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    if(ans.size() < k) cout<<-1<<endl;
    else cout<<ans[k-1]<<endl;

    return 0;
}