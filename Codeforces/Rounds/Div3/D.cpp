#include <bits/stdc++.h>

using namespace std;
bool memo[400005];

int main(){
    long long q, x, y, ans = 0, indx;
    set <long long> memo2;
    vector<long long> a;
    memset(memo, false, sizeof(memo));
    cin>>q>>x;
    while(q--){
        cin>>y;
        a.push_back(y);
        indx = (y%x);
        for(int i = 0; (indx + x*i) < 400005; i++){
            if(memo2.count(indx + x*i) == 0) {
                memo2.insert(indx + x*i);
                if((indx + x*i) == ans){
                    for(int j = ans; j < 400005; j++){
                        if(memo2.count(j) == 0) {ans = j; break;}
                    }
                }
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}