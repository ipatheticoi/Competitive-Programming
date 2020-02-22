#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    string num, ans;
    int t, n;
    cin>>t;

    while(t--){
        cin>>n;
        cin>>num;
        //cout<<"mierda"<<num<<endl;
        bool posi = false;
        ans = "";
        for(int i = n-1; i >= 0; i--)
            if((int(num[i] - '0'))%2 == 1){
                ans = num[i] + ans;
            }
        if(ans.size()%2 == 0 && ans.size() > 1) cout<<ans<<endl;
        else if (ans.size() % 2 == 1 && ans.size() > 1) cout<<ans.substr(1,ans.size()-1)<<endl;
        else cout<<-1<<endl;
    }    
    return 0;
}