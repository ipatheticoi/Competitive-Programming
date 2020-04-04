#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++){
        int n, grid[150][150];
        cin>>n;
        long long trace = 0, r = 0, c = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                cin>>grid[i][j];
                
            }
        
        for(int i = 0; i < n; i++){
            trace += grid[i][i];
        }
        for(int i = 0; i < n; i++){
            set <int> row;
            for(int j = 0; j < n; j++){
                if (row.count(grid[i][j])){
                    c++; break;
                }
                else row.insert(grid[i][j]);
            }
        }
        for(int i = 0; i < n; i++){
            set <int> col;
            for(int j = 0; j < n; j++){
                if (col.count(grid[j][i])){
                    r++; break;
                }
                else col.insert(grid[j][i]);
            }
        }
    cout<<"Case #"<<tc<<": "<<trace<<" "<<c<<" "<<r<<endl;
    }
}