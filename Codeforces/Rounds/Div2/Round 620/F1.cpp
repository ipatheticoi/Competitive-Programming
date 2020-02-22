#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    int grid[n+5][m+5], acum[5][m+5];
    memset(grid, 0, sizeof(grid));
    memset(acum, 0, sizeof(acum));
    for(int i = 1; i <=n ; i++)        
        for(int j = 1; j <= m; j++){
            cin>>grid[i][j];
        }

    int ans = 0;
    for(int i = 2; i <= n +1; i++){
        int aux = 0;
        int indx =  i + k - 1;
        for(int j = 1; j <= m; j++){
            acum[1][j] = acum[1][j-1] + grid[i-1][j];
        }
        for(int j = 1; j <= m; j++){
            acum[2][j] = acum[2][j-1] + acum[1][j] - acum[1][j-1]  + grid[i][j];
        }
        /*
        for(int r = 1; r <= n; r++){
            for(int l = 1; l <= m ; l++)
                cout<<grid[r][l];
            cout<<endl;
        }*/
        for(int j = k; j <=m; j++){
             
            int subsum = acum[2][j] - acum[2][j-k];
            //cout<<"subsum "<<subsum<<endl;
            if( subsum > aux) {
                aux = subsum;
                indx = j;
            }
        }
        for(int j = indx; j > (indx-k); j--){
            grid[i][j] = 0;
        }
/*
        cout<<endl;
        cout<<aux<<"mierda"<<endl;*/
        ans += aux;
    
    }
    cout<<ans<<endl;
    return 0;
}