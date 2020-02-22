#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
#include <bits/stdc++.h> 
  
using namespace std; 

long long crossProduct(pair<long long, long long > a, pair<long long, long long > b) { 
    long long ans;
    ans = a.first*b.second - a.second*b.first;
    return ans;
} 
long long mod(pair<long long, long long > a) { 
    long long ans;
    ans = a.first*a.first + a.second*a.second;
    return ans;
} 


int main(){
    int n, a[100005], x0, y0;
    vector<pair<long long, long long>> P, pol;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x0>>y0;
        P.push_back(make_pair(x0, y0));
    }
    if(n%2 == 1){cout<<"NO"<<endl;}
    else{
        for(int i = 0; i < n; i++){
            pol.push_back(make_pair(P[(i+1)%n].first - P[i].first, P[(i+1)%n].second - P[i].second));
        }
        bool ans = true;
        for(int i = 0; i < n/2; i++){
            //cout<<mod(pol[i])<<endl;
            if(crossProduct(pol[i], pol[i + n/2]) != 0 && mod(pol[i]) != mod(pol[i + n/2])){
                
                ans = false; break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}