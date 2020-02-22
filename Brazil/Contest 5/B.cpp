#include <bits/stdc++.h>

using namespace std;


int main(){
    ifstream cin("baklava.in");
    int t, n;
    double  alp, aux, ans;
    cin>>t;
    

    for(int i =0; i < t; i++){
        cin>>n;
        alp = acos(-1)/double(n);
        ans = 1/(1-cos(alp)*cos(alp))*10000;
        printf("%.5f\n", ans);

    }
    /*
    for(int i = 0; i <=800; i++){
        //cout<<ans[i]<<' ';
            printf("%.5f\n", double(ans[i]));
    }
    */
    return 0;
}