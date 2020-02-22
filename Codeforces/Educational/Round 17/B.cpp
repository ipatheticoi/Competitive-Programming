#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main(){
    int a, b, c, m, x;
    string y;
    cin>>a>>b>>c;
    cin>>m;
    vector < pair<int, string> > v; 
    for(int i =  0 ; i < m; i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    long long cost = 0, num = 0;
    for (int i = 0 ; i < v.size(); i++){
        if(v[i].second == "USB" && a > 0){
            a--;
            cost += v[i].first;
            num++;
        }
        else if (v[i].second == "PS/2" && b > 0)
        {
            b--;
            cost += v[i].first;
            num++;
        }
        else
        { if(a == 0 && b == 0 && c == 0) break;
            else if (c > 0)
            {
                c--;
                cost += v[i].first;
                num++;
            }
            
            
        }
            //cout<<num<<" "<<cost<<endl;

    }
    cout<<num<<" "<<cost<<endl;

    return 0;
}