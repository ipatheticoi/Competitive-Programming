#include <bits/stdc++.h>
typedef long long ll; 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define forr(i, x) for(ll i = 0; i < x; i++);
#define pb(x) push_back(x)

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a, b, x, y;
        cin>>a>>b>>x>>y;
        int s1, s2, s3, s4;
        s1 = (x)*b;
        s2 = (y)*a;
        s3 = (a - x -1)*b;
        s4 = (b - y - 1)*a;
        cout<<max(max(s3,s4),max(s1,s2))<<endl;
    }
    return 0;
}