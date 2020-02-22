#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a[10005], st[20][10005], l, r;
    cin>>n;
    //cout<<"aiuda"<<endl;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i ++)
        st[0][i] = a[i];
    for(int j = 1; (1<<j) <= n; j++)
        for(int i = 0; i + (1<<j) <= n; i++)
        {
            st[j][i] = min(st[j-1][i], st[j-1][i + (1<<(j-1))]); 
        }
    for(int i = 0; i < n; i++){
        int b = 31 - __builtin_clz(i);
        cout<<min(st[b][0], st[b][i - (1<<b)+1])<<endl;
        }
    return 0;
}