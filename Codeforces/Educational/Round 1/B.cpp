#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    long long l, r, k, m;
    string s;
    cin>>s;
    cin>>m;
    while(m--){
        cin>>l>>r>>k;
        char aux = s[l-1 + (k) % (r-l+1)];
        for(int i = l-1 ; i < r; i++){
            cout<<aux<<" "<<l-1 + (i + k - (l-1)) % (r-l+1)<<endl;
            //aux = s[l-1 + (i + 1 + k - (l-1)) % (r-l+1)];
            swap(s[l-1 + (i + 1 + k - (l-1)) % (r-l+1)],aux);
        }
        cout<<s<<endl;
    }
    cout<<s<<endl;
    return 0;
}