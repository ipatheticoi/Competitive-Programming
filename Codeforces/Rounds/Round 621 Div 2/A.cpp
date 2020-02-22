#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, d, a[500];
        cin>>n>>d;
        for (int i = 0; i < n; i++)
            cin>>a[i];
        for(int i = 1; i < n; i++)
        for(int j = 0; j < a[i]; j++)
                {
                    if (d - i < 0) break;
                    else {
                        d = d - i;
                        a[0] += 1;
                    }
                }
        cout<<a[0]<<endl;

    }
    return 0;
}