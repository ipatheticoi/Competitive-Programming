#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    string s[n+1];
    bool par[n+1];
    vector <string> ans;
    memset(par, false, sizeof(par));
    for(int i = 0; i < n; i++)
        cin>>s[i];
    for(int i = 0; (i < n); i++)
        for(int j = i+1; j < n; j++){
            if (par[i] || par[j]) continue;
            string aux = s[j];
            reverse(aux.begin(), aux.end()); 
            if(aux == s[i] ){
                par[i] = true;
                par[j] = true;
                ans.push_back(aux);
                break;
            }
        }
        string pal = "";
    for(int i = 0; i < n; i++){
        if(par[i]) continue;
        string aux = s[i];
        reverse(aux.begin(), aux.end()); 
        if(aux == s[i] && aux.size()>pal.size()) pal = aux; 
        }
    int len = 0;
    for(int i = 0; i < ans.size(); i++)
        len += ans[i].size()*2;
    len += pal.size();
    cout<<len<<endl;
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i];
    cout<<pal;
    for(int i = ans.size()-1; i >= 0 ; i--){
        string aux = ans[i];
        reverse(aux.begin(), aux.end()); 
        cout<<aux;
    }
    cout<<endl;
    return 0;
}