#include<bits/stdc++.h>
#define N 100004
using namespace std;
int cas,cass;
int n;
long long m;
int lll;
int answ;
long long auxans;
long long a[N];
long long sum[N];
long long l[N];
long long r[N];
bool test(long long h){
    int i,j;
    memset(l,0,sizeof(l));
    memset(r,127,sizeof(r));
    for(i=1;i<=n;i++){
        if(i+h-a[i]<=n) l[i+h-a[i]]=i;
    }
    for(i=n;i;i--){
        if(i-h+a[i]>0) r[i-h+a[i]]=i;
    }
    for(i=1;i<=n;i++) l[i] = max(l[i],l[i-1]);
    for(i=n;i;i--) r[i] = min(r[i],r[i+1]);
    for(i=1;i<=n;i++){
        if(l[i]==0 || r[i]==r[N-1]) continue;
        auxans = 1LL*(a[l[i]]+h)*(i-l[i]+1)/2;
        auxans += 1LL*(a[r[i]]+h-1)*(r[i]-i)/2;
        auxans -= sum[r[i]]-sum[l[i]-1];
        if(auxans<=m) return 1;
    }
    return 0;
}
int main(){
    long long l,r,me;
      cin >> n;
        cin >> m;
        sum[0]=0;
        l=0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            sum[i]=sum[i-1]+a[i];
            l=max(l,a[i]);
        }
        r=2000000000;
        while(l<r){
            me=(l+r+1)/2;
            if(test(me))l=me;
            else r=me-1;
        }
        cout << r << endl;
    return 0;
}