#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
struct customer{
    int t, low, high, lowi, highi;
    customer(){}
    void fill(int _t, int _low, int _high){
        t = _t;
        low = _low;
        high = _high;
    }
    void ini(int _lowi, int _highi){
        lowi = _lowi;
        highi = _highi;
    }

};
int main(){
    int q, n, m, t, l, h;
    cin>>q;
    while(q--){
        cin>>n>>m;
        customer client[n+1];
        client[0].fill(0, INT_MIN, INT_MAX);
        client[0].ini(m,m);
        for(int i = 1; i <= n; i++){
            cin>>t>>l>>h;
            client[i].fill(t,l,h);
        }
        bool ans = true;
        for(int i = 0; i < n; i++){
            int posmax = client[i].highi + (client[i+1].t - client[i].t);
            int posmin = client[i].lowi - (client[i+1].t - client[i].t);
            //cout<<posmin<<" "<<posmax<<endl;
            if( max(posmin, client[i+1].low) > min(posmax, client[i+1].high)){
                ans = false;
                //cout<<i<<" "<<client[i+1].low<<" "<<client[i+1].high<<endl;
                break;
            }
            else{
                client[i+1].highi = min(client[i+1].high, posmax);
                client[i+1].lowi = max(client[i+1].low, posmin);
            }
        }
        if (ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}