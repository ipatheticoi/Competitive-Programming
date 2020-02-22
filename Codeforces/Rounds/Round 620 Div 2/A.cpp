#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int t, a, b, x, y;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        if ((y-x)%(a+b) == 0) cout<<(y-x)/(a+b)<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}