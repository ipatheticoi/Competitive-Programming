#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int t, n, a[100], ans, sum, prod, contpos, minneg;
    vector <int> ze;
    cin>>t;
    while(t--){
        cin>>n;
        ans = 0;
        sum = 0;
        ze.clear();
        contpos = 0;
        minneg = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum += a[i];
            if (a[i] > 0) contpos++;
            if(minneg > a[i]) minneg = a[i];
            if(a[i] == 0) ze.push_back(i);
        }
        sum += ze.size();
        ans += ze.size();
        contpos += ze.size();
        if(sum != 0) cout<<ans<<endl;
        else if(contpos > 0) cout<<ans + 1<<endl;
        else if (minneg < -1) cout<<ans + 1<<endl;
        else cout<<ze.size() + 2<<endl;
        
    }
    return 0;
}