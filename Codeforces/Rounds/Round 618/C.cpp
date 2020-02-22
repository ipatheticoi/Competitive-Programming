#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
long long f(long long x, long long y){
    return (x|y) - y;

}
int main(){
    long long n, x, aux;
    vector <long long> a, ans;
    cin>>n;
    for(long long i = 0; i < n; i++){
        cin>>x;
        a.push_back(x);
    }

    sort(a.rbegin(), a.rend());
    multiset <long long> norep, rep;
    for(int i = 0; i < n ; i++)
        if(norep.count(a[i]) == 0) norep.insert(a[i]);
        else {rep.insert(a[i]);}
    for(int i = 0; i < n; i++){
        if(norep.count(a[i]) == 1) {
            ans.push_back(a[i]);
            norep.erase(a[i]);
        }
    }
    for(int i = 0; i < n; i++){
        if(rep.count(a[i]) == 1) {
            ans.push_back(a[i]);
            
        }
    }
    for(int i = 0; i < n-1; i++)
        cout<<ans[i]<<" ";
    cout<<ans[n-1]<<endl;

    return 0;
}