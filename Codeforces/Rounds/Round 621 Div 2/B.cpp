#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, a;
        vector <int> v;
        cin>>n>>x;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        int hops = 0;
        bool ans = false;
        sort(v.rbegin(), v.rend());
        if(v[0] == x) hops++;
        else {
            for(int i = 0; i < n-1; i++){
                    if(v[i] + v[i+1] >= x && v[i] - v[i-1] <= x) {
                        hops = hops + 2; ans = true; break;
                    }
                }
            if(!ans) {
                int mini = INT_MAX;
                for(int j = 0; j < n; j++)
                    if(mini > abs(x-v[j])){mini = abs(x-v[j]);}
                x = mini;  
                //cout<<"mini:" <<mini<<endl;
                hops++;      
                //cout<<hops<<"hops"<<endl;
                for(int i= 0; i < v.size() ; i++ ){
                    //cout<<i<<"i"<<hops<<"="<<v[i]<<endl;
                    if(x > v[i]) {hops += x/v[i]; x = x%v[i];}
                    else {hops++; break;}
                }
            }
        }
        cout<<hops<<endl;
    }
    return 0;
}