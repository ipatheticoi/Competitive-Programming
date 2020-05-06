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
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector <int> v [100000 + 10];
    int dis [1000 + 10];
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m + 2; i++){
        v[i].clear();
        dis[i] = 1e9;
    }

   for(int i = 0; i < m; i++){
       int from, next, weight;
        cin>>from>>next>>weight;

        v[i].push_back(from);
        v[i].push_back(next);
        v[i].push_back(weight);
   }

    dis[1] = 0;
    for(int i = 1; i <= n-1; i++){
        int j = 0;
        //cout<<i<<endl;
        while(v[j].size() != 0){
            if(dis[ v[j][0]  ] + v[j][2] < dis[ v[j][1] ] ) { dis[ v[j][1] ] = dis[ v[j][0]  ] + v[j][2];}
        j++;
        }
    }
    for(int i = 2; i <= n; i++) cout<<dis[i]<<" ";
    cout<<endl;
    return 0;
}