#include <bits/stdc++.h>

using namespace std;
double memo[100005];
/*
int ternary_search(int l, int r ) {
    int act = r;
    while (r - l > 1 ) {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
        cout<<m1<<" "<<m2<<endl;
        double f1 = memo[m1] + double(act - m1)/double(act);      //evaluates the function at m1
        double f2 = memo[m2] + double(act - m2)/double(act);      //evaluates the function at m2
        if (f1 > f2)
            r = m2 - 1;
        else
            l = m1 ;
    }
    cout<<"aiuda"<<l<<endl;
    return l;                    //return the maximum of f(x) in [l, r]
}*/
int main(){
    int n;
    cin>>n;
    memo[1] = 1;
    memo[2] = 1.5;
    for(int i = 3; i <= n; i++){
        memo[i] = memo[i-1] + double(1)/double(i);
    }
    printf("%.12f\n", memo[n]);
    return 0;
}