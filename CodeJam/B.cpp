#include <bits/stdc++.h>
using namespace std;
int hs(char a){
    return int(a-'0');
}
int main(){
    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++){
        string s, ans = "";
        cin>>s;
        int depth = 0;
        for(int i = 0 ; i < s.size(); i++){
            if(hs(s[i]) > depth){
                for (int j = 0; j < (hs(s[i]) - depth); j++)
                ans += "(";
                depth = hs(s[i]);
            }
            else if(hs(s[i]) < depth){
                for (int j = 0; j < (depth - hs(s[i])); j++)
                ans += ")";
                depth = hs(s[i]);
            }
            ans += s[i];
            //cout<< ans <<endl;
        }
        for (int j = 0; j < depth; j++)
            ans += ")";
    //printf("Case #%d: %s\n", tc, ans);
    cout<<"Case #"<<tc<<": "<<ans<<endl;
    }
}