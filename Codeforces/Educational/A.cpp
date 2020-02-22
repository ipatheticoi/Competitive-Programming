#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    long long n, p;
    string s;
    vector< string > buyers;
    cin>>n>>p;
    for(long long i = 0; i < n; i++){
        cin>>s;
        buyers.push_back(s);
    }
    long long cant = 0, ans = 0;
    reverse(buyers.begin(), buyers.end());
    for(long long i = 0; i < buyers.size(); i++){
        if(buyers[i] == "halfplus"){
            cant = (cant + 1)*2;
            ans += cant*p/2;

            
        }
        else{
            cant = (cant)*2;
            ans += cant*p/2;
        }

    }
    cout<<ans/2<<endl;

    return 0;
}