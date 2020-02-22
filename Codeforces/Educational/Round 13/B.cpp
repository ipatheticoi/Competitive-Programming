#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
bool bisiesto (long long y){
    if ((y%4 == 0 && y %100 !=0) || (y % 400 == 0) ) return true;
    else return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long y;
    cin>>y;
    long long cont = 0;
    bool bi = false;
    bi = bisiesto(y);
    if(bi){
        while(true){
            if(bisiesto(y)) cont += 2;
            else cont++;
            y++;
            if(cont%7 == 0 && bisiesto(y)) break;
        } 
    }
    else{
        while(true){
            if(bisiesto(y)) cont += 2;
            else cont++;
            y++;
            if(cont%7 == 0 && !bisiesto(y)) break;
        } 
    }
    cout<<y<<endl;

    return 0;
}