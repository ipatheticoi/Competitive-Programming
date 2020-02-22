#include <bits/stdc++.h>
long long int cal[1000005];
long long int hap[1000005];
long long int acum[1000005];
using namespace std;

vector< pair<long long ,long long> > ice;
vector<long long > aux, aux2;

int main(){
	int t;
    ifstream cin("icecream.in");
    long long l , r, mid, n, k;


	cin >> t;
	while(t--){
		cin >> n >> k;
        ice.clear();
        aux.clear();
        aux.clear();
		for(int i=0; i<n; i++) cin >> cal[i];
		for(int i=0; i<n; i++) cin >> hap[i];
		for(int i=0; i<n; i++) ice.push_back(make_pair(cal[i], hap[i]));
		sort(ice.begin(),ice.end());
    
        //for(int i=0; i<n; i++)
         //   cout<<ice[i].first<<" "<<ice[i].second<<endl;
        
        for(int i = 0; i < k - 1; i++){
            aux.push_back(ice[i].second);
        }
        int it = k-1;
        while(ice[it].first == ice[k-1].first){
            aux2.push_back(ice[it].second);
            it++;
        }
        reverse(aux2.begin(), aux2.end());
        for(int i = 0 ; i < aux2.size(); i++)
            aux.push_back(aux2[i]);

        acum[0] = 0;  
        acum[1] = aux[0];  
        for (int i = 2; i <= aux.size(); i++){
            acum[i] = ice[i-1].second + acum[i-1];  
            //cout<<acum[i]<<endl;
        }

        long long maxi = 0;
        for (int i = k; i <= aux.size()+1 ; i++){
            //cout<<"mierda"<<acum[i] - acum[i-k]<<endl;
            maxi = max(maxi, acum[i] - acum[i-k]);
        }

		cout << ice[k-1].first << " " << maxi<< '\n';
	}
	return 0;
}