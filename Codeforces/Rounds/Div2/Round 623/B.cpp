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
        int a, b, p;
        string s;
        cin>>a>>b>>p;
        cin>>s;
        reverse(all(s));
        char state = s[0];
        int ans = 0; int pos = 0;
        if (a > p && b > p) {cout<<s.size()<<endl; continue;}
        if (s[1] == 'A' && a <= p){
            ans +=  a;
            pos = 1;
        }
        else if(s[1] == 'B' && b <= p){
            ans += b;
            pos = 1;
        }
        else {
            cout<<s.size()<<endl;
            continue;
        }
        state = s[1];
        //cout<<"aiuda"<<ans<<" state: "<<state<<endl;
        for(int i = 2; i < s.size(); i++){ 
            if(s[i] != state) {
                //cout<<s[i]<<"chn"<<ans<<endl;
                if( s[i] == 'A') {
                    if (ans + a > p) break; 
                    //cout<<"bausra"<<endl;
                    ans += a; 
                    state = s[i]; 
                    pos = i;}
                else {
                        if (ans + b > p) break;
                        ans += b;
                        state = s[i];
                        pos = i;}
                    //cout<<ans<<" ";
            }
            else{ pos = i;}
        }
        //cout<<ans<<" ";
        cout<<s.size()-pos<<endl;

    }
    return 0;
}