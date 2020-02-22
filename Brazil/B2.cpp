#include <bits/stdc++.h>

using namespace std;
pair< double, double> v, vn; 
double dotproduct(pair<double, double> a1, pair<double, double> a2){
    return a1.first*a2.first + a1.second*a2.second;
}

pair<double, double> resta(pair<double, double> a1, pair<double, double> a2){
    pair<double, double> ans;
    ans.first = a1.first - a2.first;
    ans.second = a1.second - a2.second;
    return ans;
}

pair<double, double> suma(pair<double, double> a1, pair<double, double> a2){
    pair<double, double> ans;
    ans.first = a1.first + a2.first;
    ans.second = a1.second + a2.second;
    return ans;
}

pair<double, double> med(pair<double, double> a1, pair<double, double> a2){
    pair<double, double> ans;
    ans.first = (a1.first + a2.first)/2;
    ans.second = (a1.second + a2.second)/2;
    return ans;
}
bool inside(pair<double, double> a1, pair<double, double> a2, pair<double, double> test, char dir){
    pair<double, double> u, amed;
    u.first = -(a1.second - a2.second);
    u.second = a1.first - a2.first;
    //cout<<"u"<<u.first<<" "<<u.second<<endl;
    //cout<<v.first<<"mierda"<<v.second<<endl;
    if ( dotproduct(u, v) < 0 && dir == 'd'){u.first *= -1; u.second *=-1;}
    else if ( dotproduct(u, v) > 0 && dir == 'i'){u.first *= -1; u.second *=-1;}
    amed = med(a1,a2);
    if( dotproduct(resta(amed,a1), vn) < 0) {vn.first *= -1; vn.second *= -1;}
    /*
    cout<<"u"<<u.first<<" "<<u.second<<endl;
    cout<<"vn"<<vn.first<<" "<<vn.second<<endl;
    cout<<"test"<<test.first<<" "<<test.second<<endl;
    cout<<"a2" << a2.first<<" "<<a2.second<<endl;
    cout<<"resta"<<resta(test,a2).first<<" "<<resta(test,a2).second<<endl;
    cout<<dotproduct(u,v)<<endl;
    cout<<dotproduct(vn, resta(test,a1))<<endl;
    cout<<dotproduct(vn, resta(test,a2))<<endl;
    cout<<dotproduct(resta(test,a1),u)<<endl;
*/

    if( dotproduct(vn, resta(test,a1)) >= 0 && dotproduct(vn, resta(test,a2)) <=0 && dotproduct(resta(test,a1),u) >= 0)
        return true;
    else 
        return false;
}

int main(){
    int n;
    double ax1, ay1, ax2, ay2, bx1, by1, bx2, by2, vx, vy;
    double th;
    pair< double, double> a1, a2, b1, b2; 
    cin>>n;

    while(n--){
        cin>>ax1>>ay1>>ax2>>ay2>>bx1>>by1>>bx2>>by2>>vx>>vy;
        a1 = make_pair(ax1, ay1);
        a2 = make_pair(ax2, ay2);

        b1 = make_pair(bx1, by1);
        b2 = make_pair(bx2, by2);
        v = make_pair(vx, vy);
        vn = make_pair(-vy, vx);

    if(inside(a1, a2, b1, 'd') || inside(a1, a2, b2, 'd') || inside(b1, b2, a1, 'i') || inside(b1, b2, a2, 'i'))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    }
    return 0;
}