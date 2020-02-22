#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    long long int n, k, d = 0, a[2000], q = 0;
    char resp;
    deque <int> dq;
    cin>>n>>k;
    memset(a, 0, sizeof(a));
    while(q <= (2*(n/k)*n)){
        cout<<"? "<<q<<endl;
        cout.flush();
        cin>>resp;
        if(resp == 'N'){
            d++;
            dq.push_front(d);
            if(dq.size() > k) {
                dq.pop_back();
            }
        }    
        q++;
    }
    return 0;
}