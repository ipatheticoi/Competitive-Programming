#include <bits/stdc++.h>

using namespace std;

int main(){

    long long t, n, x, y;
    vector< pair<long long, long long> > xy;
    pair<long long, long long > pos;
    string path = "";
    bool posible = false;
    cin>>t;
    while(t--){
        cin>>n;
        xy.clear();
        pos.first = 0;
        pos.second = 0;
        path = "";
        posible = true;
        for(int i = 0; i < n; i++){
            cin>>x>>y;
            xy.push_back(make_pair(x,y));
        }
        sort(xy.begin(), xy.end());
        for(int i = 0; i < xy.size(); i++){
            if(pos.first > xy[i].first || pos.second > xy[i].second) {posible = false; break;}
            for(int j = pos.first; j < xy[i].first; j++){
                path += "R";
            }
            for(int j = pos.second; j < xy[i].second; j++){
                path += "U";
            }
            pos.first = xy[i].first;
            pos.second = xy[i].second;
        }
        if(!posible) cout<<"NO"<<endl;
        else cout<<"YES\n"<<path<<endl;

    }
}