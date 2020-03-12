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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, u, v;
    cin>>n>>m;
    vector<int> g[n+1];
    bool vis[n+1];
    memset(vis, false, sizeof(vis));

    forr(i, m){
        cin>>u>>v;
        g[u].pb(v);
        g[v].push_back(u);
    }
    int head;
    cin>>head;

    stack<int> s;
    s.push(head);
    vis[head] = true;
    while(!s.empty()){
        u = s.top();
        s.pop();
        forr(i, g[u].size()){
            int v = g[u][i];
            if(!vis[v]){
                s.push(v);
                vis[v] = true;
            }
        }
    }
    int ans = 0;
    forr(i,n){
        if(!vis[i+1]) ans++;
    }
    cout<<ans<<endl;
    return 0;
}