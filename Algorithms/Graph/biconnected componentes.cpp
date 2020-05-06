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
int temp = 0;
int n, m, parent[50], disc[50], low[50];
bool adj[50][50], vis[50];
void dfs(int vertex){
    disc[vertex] = low[vertex] = temp;
    int children = 0;
    for(int i = 0; i < n; i++){
        if(adj[vertex][i] && !vis[i]){
            vis[i] = true;
            parent[i] = vertex;
            children++;
            temp++;
            dfs(i);
            low[vertex] = min(low[vertex], low[i]);
            if (parent[i] == -1 && children > 1){
                
            }
            if (parent[i] != -1 && low[i] >= disc[i]){

            } 
        }
        if(adj[vertex][i] && vis[i] && parent[vertex] != i) low[vertex] = min(low[vertex], disc[i]);
    } 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(adj, false, sizeof(adj));
    memset(parent, -1, sizeof(parent));
    cin>>n>>m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u][v] = adj[v][u] = true;
    }
    dfs
    return 0;
}