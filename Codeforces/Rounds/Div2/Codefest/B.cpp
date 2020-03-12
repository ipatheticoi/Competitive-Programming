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
    ll n, s, x;
    vector<int> a;
    cin>>n>>s;
    forr(i,n){
        cin>>x;
        a.push_back(x);
    }
    sort(all(a));
    ll med = a[n/2], ans = 0;
    if(med < s){
        forr(i, n/2+1){
            if(s - a[n/2 + i] > 0) ans += s - a[n/2 + i];
        }
    }
    else {
        forr(i, n/2+1){
            if(a[n/2 - i] - s> 0) ans += a[n/2 - i] - s;
        }
    }
    cout<<ans<<endl;
    return 0;
}