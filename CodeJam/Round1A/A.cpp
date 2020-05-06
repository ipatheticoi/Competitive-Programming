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
    int t;
    cin>>t;
    for(int tc = 1; tc <=t; tc++){
        cout<<"Case #"<<tc<<": ";
        int n; 
        vector <int> id[60];
        string s[60];
        cin>>n;
        for(int i = 0; i< n; i++){
            cin>>s[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < s[i].size(); j++){
                if(s[i][j] == '*') id[i].push_back(j);
            }
        }
        vector<string> dic;
        for(int i = 0; i < n; i++){
            dic.push_back(s[i].substr(0,id[i][0]));
        }
        sort(all(dic));
        int least = 0;
        bool ok = true;
        string ans, ansl, ansr;
        int idx = 0;
        for(int i = 0; i < dic.back().size() && ok; i++){
            char eval = dic.back()[i]; 
            for(int j = 0; j < dic.size() && ok; j++){
                
                if(dic[j].size() > i && eval != dic[j][i]) {ok = false;}
            }
            
        }
        if(ok){ansl = dic.back();}
        else ansl = "*";

        for(int i = 0; i< n; i++){
            reverse(all(s[i]));
            id[i][0] = s[i].size()-id[i][0]-1;
        }

        dic.clear();
        for(int i = 0; i < n; i++){
            dic.push_back(s[i].substr(0,id[i][0]));
        }
        sort(all(dic));
        ok = true;
        idx = 0;
        for(int i = 0; i < dic.back().size() && ok; i++){
            char eval = dic.back()[i]; 
            for(int j = 0; j < dic.size() && ok; j++){
                
                if(dic[j].size() > i && eval != dic[j][i]) {ok = false;}
            }
            
        }
        if(ok){ansr = dic.back(); reverse(all(ansr));}
        else ansr = "*";
        if(ansl == "*" || ansr == "*") cout<<"*"<<endl;
        else cout<<ansl + ansr<<endl;
        //cout<<ansl<<" "<<ansr<<endl;

    }
    return 0;
}