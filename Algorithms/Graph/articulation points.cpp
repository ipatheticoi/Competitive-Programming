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
int n, m, adj[15][15], u, v, disc[15], low[15], parent[15], cont = 0;
vector <pair<int, int> > bridge;
set <int> ap;
bool vis[15];
int temp = 0;
void dfs(int source){
    disc[source] = low[source] = temp;
    int children = 0;
    for(int i = 0; i < n; i++){
        if(adj[source][i]==1){
            if(!vis[i]){
                vis[i] = true;
                parent[i] = source;
                children++;
                temp++;
                dfs(i);
                low[source] = min(low[source], low[i]);
                if(parent[i] != -1 && low[i] >= disc[source]) {ap.insert(source);}
                if(low[i] > disc[source]) bridge.push_back({min(source, i), max(source, i)});
                if(parent[source] == -1 && children > 1){ap.insert(i);}
            }
            else if (parent[source] !=  i) low[source] = min(low[source], disc[i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    memset(adj, 0, sizeof(adj));
    memset(parent, -1, sizeof(parent));
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    dfs(0);
    cout<<ap.size()<<endl;
    for(auto x: ap) cout<<x<<" ";
    cout<<endl;
    sort(all(bridge));
    cout<<bridge.size()<<endl;
    for(auto x: bridge) cout<<x.first<<" "<<x.second<<endl;
    return 0;
}