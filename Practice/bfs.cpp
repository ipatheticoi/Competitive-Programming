#include <bits/stdc++.h>
typedef long long ll; 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define forr(i, x) for(ll i = 0; i < x; i++)
#define pb(x) push_back(x)
void print(){

}
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin>>n;
    vector<int> v[n+5];
    forr(i, n-1){
        cin>>x>>y;
        v[x-1].push_back(y-1);
        v[y-1].push_back(x-1);

    }
    cin>>x;
    int dis[n+5], cont = 0;
    //ll j;
    memset(dis, -1, sizeof(dis));
    queue <int> q;
    q.push(0);
    dis[0] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        forr(j, v[u].size()){
            if(dis[v[u][j]] < 0){
                dis[v[u][j]] = dis[u] + 1;
                q.push(v[u][j]);
                //cout<<j<<endl;
                if(dis[v[u][j]] == x){
                    cont++;
                    //cout<<" "<<x<<endl;
                    cout<<u<<" "<<v[u][j]<<endl;
                }
            }

        }
    }

    cout<<cont<<endl;
    return 0;
}