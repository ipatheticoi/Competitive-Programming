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
    int n, aux = 0, ans = 0;
    cin>>n;
    for(int i = 1; i < n; i *=2){
        aux += i;
        ans++;
    }
    if(aux < n) ans++;
    cout<<ans<<endl;
}