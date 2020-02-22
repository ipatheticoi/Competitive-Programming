#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned int n, t, a[100005], table[40], ans =0, indx;
    int it = 0, k;
    ifstream cin("looking.in");
    cin>>t;
    while(t--){
        cin>>n>>k;
        ans = 0;
        it = 0;
        memset(table, 0, sizeof(table));
        for(int i = 0 ; i < n; i++)
            cin>>a[i];
        for(int i = 0 ; i < n; i++){
            indx = 32 - __builtin_clz (a[i]);
            //cout<<indx<<endl;
            if( indx > it) it = indx; 
            table[indx] = max(a[i], table[indx]);
            //cout<<table[indx]<<"mierda"<<endl;
        }
        //cout<<"it:" <<(int)it<<endl;
        for(int i = (int)it ; ((i >= (it-k)) && (i >= 0)); i--){
            ans |= table[i];
            //cout<<"ans: "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}