#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int dp[1000006],s[1000];
int main()
{ int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n);
    int off = s[0];
    for(int i = 0;i < n;i++)
        s[i]-=off;

    for(int i = 0;i <= k*s[n-1]; i++)
        dp[i]=k+1;
    dp[0]=0;
    for(int i=0;i<=k*s[n-1];i++)
    {
        for(int j=0;j<n;j++)
            if(i>=s[j]) dp[i]=min(dp[i-s[j]]+1,dp[i]);
    }
    for(int i=0;i<=k*s[n-1];i++)
        if(dp[i]<=k)
        cout<<i+k*off<<" ";
    cout<<endl;
}