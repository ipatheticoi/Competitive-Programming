#include <bits/stdc++.h>

using namespace std;
long long n, s, t, k, aux, mini = INT_MAX,ans;
vector <long long> a;
int main(){
    cin>>t;
    while(t--){
        a.clear();
        cin>>n>>s>>k;
        for(int i = 0; i < k; i++){
            cin>>aux;
            a.push_back(aux);
        }
        sort(a.begin(), a.end());
        ans = 0;
        while(true){
            bool foco1 = false, foco2 = false, foco = false;
            for(int i = 0; i < k; i++){
                if (((s + ans) <= n)) foco1 |= ((s + ans) == a[i]);
                if (((s - ans) >= 1)) foco2 |= ((s - ans) == a[i]);
                //cout<<"mierd" << (((s - ans) == a[i]) && ((s - ans) >= 1))<<endl;
            }
            //cout<<"aiuda "<<foco1<<" "<<foco2<<endl;
            if((!foco1 && ((s + ans) <= n) ) || (!foco2 && ((s - ans) >= 1))) break;
            ans++;
        }
        cout<<ans<<endl;

    } 
    return 0;
}