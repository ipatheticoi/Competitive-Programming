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
    int t;
    cin>>t;

    for(int tc = 1; tc <= t; tc++){
        int x, y;
        string ans;
        cin>>x>>y;
        if((x%2 == 0 && y&2 == 0) || (x%2 != 0 && y&2 != 0)){
            ans = "IMPOSSIBLE";
        }
        else {
            if (x%2 != 0) {
                if(x-1 != y) x -=1, ans += "E";
                else x += 1, ans += "W";
            }
            if (y%2 != 0) {
                if(y-1 != x) y -=1, ans += "N";
                else y += 1, ans += "S";
            }
            int i = 2;
            while(true){
                
            }
        }
        cout<<"Case #"<<tc<<": "<<ans<<endl;
    }
    return 0;
}