#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
bool compare(string a, string b) 
{ 
    return (a+b < b+a); 
} 
int main(){
    int n;
    vector<string>s;
    string x;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>x;
        s.push_back(x);
    }
    sort(s.begin(), s.end(), compare);
    for (int i = 0; i < s.size(); i++){
        cout<<s[i];
    }
    cout<<endl;
     return 0;
}