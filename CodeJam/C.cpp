#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++){
        int n;
        char ans[50000];
        cin>>n;
        vector< pair< pair<int, int>, int > > s;
        int l, r;
        for(int i = 0; i < n; i++){
            cin>>l>>r;
            s.push_back(make_pair(make_pair(l,r),i));
        }
        sort(s.begin(), s.end());

        int c = 0, j = 0;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(c <= s[i].first.first){
                ans[s[i].second] = 'C';
                c = s[i].first.second; 
            }
            else if (j <= s[i].first.first){
                ans[s[i].second] = 'J';
                j = s[i].first.second; 
            }
            else {flag = true; break;}
        }
        cout<<"Case #"<<tc<<": ";
        if (flag == true) {cout<<"IMPOSSIBLE"<<endl;}
        else {
            for(int i = 0; i < n; i++) cout<<ans[i];
            cout<<endl;
        }
    }

    return 0;
}