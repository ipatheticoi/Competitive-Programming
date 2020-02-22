#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin>>n>>k;
    cout<< n + k - n%k<<endl;

    return 0;
}