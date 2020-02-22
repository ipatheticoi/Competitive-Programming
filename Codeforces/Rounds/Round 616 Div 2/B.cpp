#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int t, n, a[300005];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        bool inc = true, dec = true, med = true;

        for(int i = 0; i < n; i++){
            if(a[i] - i < 0) {inc = false;
            break;
            }
        }

        for(int i = 0; i < n; i++){
            if(a[i] - ((n-1) - i) < 0) {dec = false;
            break;
            }
        }

        if(n%2 == 1){
            for(int i = 0; i < n/2; i++){
                //cout<<a[i]-i<<" ";
                if(a[i] - i < 0) {med = false;
                break;
                }
            }
            //cout<<"]";
            for(int i = n/2; i < n; i++){
                //cout<<(a[i] - ((n-1) - i))<<" ";
                if((a[i] - ((n-1) - i))< 0){med = false;
                break;
                }
            }
        }

        else{
            for(int i = 0; i <= n/2; i++){
                if(a[i] - i < 0) {med = false;
                break;
                }
            }
            for(int i = n/2+1; i < n; i++){
                if((a[i] - ((n-1) - i)) < 0) {med = false;
                break;
                }
            } 

            if(!med){
                med = true;
                //cout<<"mierda";
                for(int i = 0; i < n/2-1; i++){
                    //cout<<i;
                    if(a[i] - i < 0) {med = false;
                    break;
                    }
                }
                for(int i = n/2-1; i < n; i++){
                    //cout<<((n-1) - i);
                    if(a[i] - ((n-1) - i) < 0) {med = false;
                    break;
                    }
                }
                //cout<<endl; 
            }
        }

        //cout<<inc<<" "<<dec<<" "<<med<<" ";
        if(inc || dec || med) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}