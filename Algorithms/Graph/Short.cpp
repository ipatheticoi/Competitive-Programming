#include <bits/stdc++.h>
typedef long long ll; 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define forr(i, x) for(ll i = 0; i < x; i++)
#define pb(x) push_back(x)
#define mp make_pair
#define minimum(a)	*min_element(a.begin(), a.end())
#define maximum(a)	*max_element(a.begin(), a.end())
#define INF int(1e9+5)
#define SIZE int(1e4+5)
using namespace std;
template <typename T> void print(T x) {cout<<x<<endl;}
template <typename T> void print(T x, T y) {cout<<x<<" "<<y<<endl;}
template <typename T> void print(T x, T y, T z) {cout<<x<<" "<<y<<" "<<z<<endl;}

int n, m, u, v, w, id[SIZE], vis[SIZE], dis[SIZE];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector< pair<int, int> >  graph[SIZE];
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    for(int i = 1; i <= SIZE; i++) dis[i] = INF;
    for(int i = 0; i < m; i++){
        cin>>u>>v>>w;
        graph[u].push_back({v, w});
        //graph[v].push_back({u, w});
    }
    multiset<pair<int, int> > s;
    dis[1] = 0; 
    s.insert({0, 1});
    while(!s.empty()){
        pair <int, int> p = *s.begin();
        s.erase(s.begin());
        if(vis[p.first]) continue;
        vis[p.first] = true;
        int x = p.second, weigh = p.first;
        for(int i = 0; i < graph[x].size(); i++){
            int e = graph[x][i].first, w = graph[x][i].second;
            if(dis[x] + w < dis[e]){dis[e] = dis[x] + w; s.insert({dis[e], e});}
        }
    }
    for(int i = 2; i <= n; i++) cout<<dis[i]<<" ";
    cout<<endl;
    return 0;
}
