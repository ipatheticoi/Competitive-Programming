#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int t, n, a[200005], x;
    vector <int> v;
    cin>>t;
    while(t--){
        cin>>n;
        v.clear();
        for(int i = 0; i < 2*n; i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout<<abs(v[n-1] - v[n])<<endl;


    }
    return 0;
}