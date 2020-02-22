#include <bits/stdc++.h>

using namespace std;

double dotproduct(pair<double, double> a1, pair<double, double> a2){
    return a1.first*a2.first + a1.second*a2.second;
}

pair<double, double> resta(pair<double, double> a1, pair<double, double> a2){
    pair<double, double> ans;
    ans.first = a1.first - a2.first;
    ans.second = a1.second - a2.second;
    return ans;
}
bool inside(pair<double, double> a1, pair<double, double> a2, pair<double, double> test, char dir){
    pair<double, double> u;
    u.first = -(a1.second - a2.second);
    u.second = a1.first - a2.first;
    //cout<<"u"<<u.first<<" "<<u.second<<endl;
    if (u.first < 0 && dir == 'd'){u.first *= -1; u.second *=-1;}
    else if (u.first > 0 && dir == 'i'){u.first *= -1; u.second *=-1;}
    //cout<<"mierda"<< (test.second < max(a1.second, a2.second) + 1e-7) <<endl;
    //    cout<<"mierda"<< (test.second > min(a1.second, a2.second) - 1e-7) <<endl;
    //    cout<<"mierda"<<dotproduct(resta(test,a1),u)<<endl;
    if(test.second <= max(a1.second, a2.second) + 1e-7  && test.second >= min(a1.second, a2.second) - 1e-7 && dotproduct(resta(test,a1),u) >= 0)
        return true;
    else 
        return false;
}

int main(){
    int n;
    double ax1, ay1, ax2, ay2, bx1, by1, bx2, by2, vx, vy;
    double th;
    pair< double, double> a1, a2, b1, b2, v; 
    cin>>n;

    while(n--){
        cin>>ax1>>ay1>>ax2>>ay2>>bx1>>by1>>bx2>>by2>>vx>>vy;
        //cout<<"coomp"<<vx<<vy<<endl;
        th = atan2(vy,vx);
        double pi = acos(-1);
        //cout<<"theta"<<th*180/pi<<endl;
        a1.first = ax1*cos(th) + ay1*sin(th);
        a1.second = -ax1*sin(th) + ay1*cos(th); 

        a2.first = ax2*cos(th) + ay2*sin(th);
        a2.second = -ax2*sin(th) + ay2*cos(th); 

        b1.first = bx1*cos(th) + by1*sin(th);
        b1.second = -bx1*sin(th) + by1*cos(th); 

        b2.first = bx2*cos(th) + by2*sin(th);
        b2.second = -bx2*sin(th) + by2*cos(th); 
        /*
        cout<<a1.first<<" "<<a1.second<<endl;
        cout<<a2.first<<" "<<a2.second<<endl;

        cout<<b1.first<<" "<<b1.second<<endl;
        cout<<b2.first<<" "<<b2.second<<endl;
        */

    if(inside(a1, a2, b1, 'd') || inside(a1, a2, b2, 'd') || inside(b1, b2, a1, 'i') || inside(b1, b2, a2, 'i'))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    }
    return 0;
}