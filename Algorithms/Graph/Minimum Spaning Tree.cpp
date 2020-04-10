#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
int n, m, u, v, w, id[100005];
struct Edge {
    int u, v, w;
    Edge (){}
    Edge (int _u, int _v, int _w){
        u = _u; v = _v; w = _w;
    }
    bool operator <(const Edge &b){
        return w < b.w;
    }
};
int root(int x){
    while(id[x]!=x){
        id[x] = id[id[x]];
        x = id[x];
    }
    return id[x];
}
void union_find(int u, int v){
    int a = root(u);
    int b = root(v);
    id[a] = id[b];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector <Edge> Graph;
    cin>>n>>m;
    for(int i = 0; i < n+1; i++){id[i]=i;}
    for(int i = 0; i < m; i++){
        cin>>u>>v>>w;
        Graph.push_back(Edge(u, v, w));
    }
    sort(Graph.begin(), Graph.end());
    long long minimum_cost = 0;
    for (int i = 0; i < m; i++){
        if(root(Graph[i].u) != root(Graph[i].v)){
            minimum_cost += Graph[i].w;
            union_find(Graph[i].u, Graph[i].v);
        }
    }
    cout<<minimum_cost<<endl;

    return 0;
}