#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
long long  n, x;
vector <long long > p;
int main(){
    string s;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;
        p.push_back(x);
    }
    cin>>s;
    long long bob = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'B') bob += p[i];
    }
    //cout<<bob<<endl;
    long long copy = bob, maxi = bob;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') copy += p[i];
        else copy -= p[i];
        maxi = max(copy, maxi);
    }
    reverse(s.begin(), s.end());
    reverse(p.begin(), p.end());
    //cout<<copy<<" fef"<<endl;
    copy = bob;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') copy += p[i];
        else copy -= p[i];
        //cout<<copy<<"pi"<<endl;
        maxi = max(copy, maxi);
        //cout<<maxi<<endl;
    }
    cout<<maxi<<endl;

    return 0;
}