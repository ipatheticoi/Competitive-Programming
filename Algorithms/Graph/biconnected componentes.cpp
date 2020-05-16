#include <bits/stdc++.h>
typedef long long ll; 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define forr(i, x) for(ll i = 0; i < x; i++)
#define pb(x) push_clcback(x)
#define mp make_pair
#define minimum(a)	*min_element(a.begin(), a.end())
#define maximum(a)	*max_element(a.begin(), a.end())

using namespace std;
int temp = 0, even = 0, odd = 0;
int n, m, parent[50], disc[50], low[50];
bool adj[50][50], vis[50];
stack <pair <int, int> > edges;
void dfs(int vertex){
    disc[vertex] = low[vertex] = temp;
    int children = 0;
    vis[vertex] = true;
    for(int i = 0; i < n; i++){
        if(adj[vertex][i]){
            if (!vis[i]){
                vis[i] = true;
                parent[i] = vertex;
                children++;
                edges.push({vertex, i});
                //cout<<"added: "<<vertex<<" "<<i<<endl;
                temp++;
                dfs(i);
                low[vertex] = min(low[vertex], low[i]);
                if (parent[i] == -1 && children > 1){
                    set<int> ver;
                    while (!edges.empty() && edges.top() != make_pair(vertex, i)){
                        //cout<<edges.top().first<<" "<<edges.top().second<<endl;
                        ver.insert(edges.top().first); 
                        ver.insert(edges.top().second); 
                        edges.pop();
                    }
                    cout<<edges.top().first<<" "<<edges.top().second<<endl;
                    ver.insert(edges.top().first); 
                    ver.insert(edges.top().second);
                    edges.pop();
                    ver.size()%2 == 0 && ver.size() != 0? even++: odd++;
                    //cout<<"end"<<endl;
                }
                if (parent[i] != -1 && low[i] >= disc[vertex]){
                    set <int> ver;
                    while (!edges.empty() && edges.top() != make_pair(vertex, i) ){
                        //cout<<edges.top().first<<" "<<edges.top().second<<endl;
                        ver.insert(edges.top().first); 
                        ver.insert(edges.top().second); 
                        edges.pop();
                    }
                    //cout<<edges.top().first<<" "<<edges.top().second<<endl;
                    ver.insert(edges.top().first); 
                    ver.insert(edges.top().second); 
                    edges.pop();
                    //cout<<"end"<<endl;
                    ver.size()%2 == 0 && ver.size() != 0 ? even++: odd++;
                }

            } 
            else if(parent[vertex] != i && disc[i] < low[vertex]) {
                low[vertex] = disc[i];
                edges.push({vertex, i});
                //cout<<"addedx: "<<vertex<<" "<<i<<endl;
            }
        }
    }
}
void biconnected(){
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i);
            set <int> ver;
            
            while (!edges.empty()){
                //cout<<edges.top().first<<" "<<edges.top().second<<endl;
                ver.insert(edges.top().first);
                ver.insert(edges.top().second);
                edges.pop();
            }
            //cout<<"end"<<endl;
            //cout<<(ver.size() != 0);
            if(ver.size() == 0) continue;
            if (ver.size()%2 == 0 ) even++; else odd++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    memset(adj, false, sizeof(adj));
    memset(parent, -1, sizeof(parent));
    memset(vis, false, sizeof(vis));
    cin>>n>>m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u][v] = adj[v][u] = true;
    }
    biconnected();
    cout<<odd<<" "<<even<<endl;
    return 0;
}