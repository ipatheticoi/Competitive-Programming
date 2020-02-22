#include <bits/stdc++.h>

using namespace std;
int main(){

    double vb, vw, x1, y1, x2, y2, xg, yg, xd, yd, xs[1005], ys[10005];
    double ans1, ans2 = DBL_MAX, ans3 = DBL_MAX, ans = DBL_MAX;
    double xparedi[4], yparedi[4], xparedf[4], yparedf[4];
    double xstati, ystati, xstatf, ystatf;

    double near;
    int n;
    cin>>vw>>vb;
    cin>>x1>>y1;
    cin>>x2>>y2;

    cin>>xg>>yg;
    cin>>xd>>yd;

    xg -= x1;
    yg -= y1;
    xd -= x1;
    yd -= y1;

    x2 -= x1;
    y2 -= y1;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>xs[i]>>ys[i];
        xs[i] -= x1;
        ys[i] -= y1;
    }

    cout<< x2 << " "<< y2 <<endl;
    cout<<xg<<" "<<yg<<"->"<<xd<<" "<<yd<<endl;
    ans1 = hypot(double(fabs(xg - xd)), double(fabs(yg - yd))) / vw;
    cout<<ans1<<endl;

    double k = vw/vb, d, mini = 1, resp, twalk, tbike;
    double left, rightn, rightd;
    double acrit = asin(vw/vb);
    double alp1, alp2, alp3, pi = acos(-1);
    // pared

    for (int i = 0; i < 4; i++){
        // razante
        double Xg [] = {xg, yg, (x2 - xg),(y2 - yg)};
        double Xd [] = {xd, xg, (x2 - xd), (y2 - yd)};
        double Yg [] = {yg, xg, yg, xg};
        double Yd [] = {yd, xd, yd, xd};
        d = Xg[i]*tan(acrit) + Xd[i]*tan(acrit);
        if(d > fabs(Yg[i] - Yd[i])) continue;
        ans2 = min(ans2, (Xg[i]/cos(acrit) + Xd[i]*cos(acrit))/vw + (fabs(Yg[i]-Yd[i]) - d));
    }
    
    double Xg [] = {xg, xg, (x2 - xg), (x2 - xg)};
    double Xd [] = {xd, xd, (x2 - xd), (x2 - xd)};

    double Yg [] = {yg, (y2 - yg), (y2 - yg), yg};
    double Yd [] = {yd, (y2 - yd), (y2 -yd), yd};

    for (int i = 0; i < 4; i++){
        mini = 1;
        resp = 2;
        for(double x = 0; x <=1; x += 0.00001){
            left = x*(sqrt(1-k*k*x*x))/(sqrt(1-x*x)*sqrt(1-k*k-k*k*x*x));
            rightn = Yg[i]*sqrt(1-k*k*x*x)-Xg[i]*k*x;
            rightd = (Xd[i]*sqrt(1-k*k+k*k*x*x)-Yg[i]*k*sqrt(1-x*x));
            if (fabs(left - rightn/rightd) < mini){
                mini = fabs(left - rightn/rightd);
                resp = x;
            }
        }
        if (true || (mini < 1e-5 && fabs(resp) < 1)){              
            alp1 = asin(k*resp);
            alp2 = asin(resp);
            alp3 = asin(k*cos(alp2));
            printf("alpas %.5f %.5f %.5f \n",alp1, alp2, alp3);
            printf("alpas sexa %.5f %.5f %.5f \n",alp1*180/pi, alp2*180/pi, alp3*180/pi);
            twalk = (Xg[i]/cos(alp1) + Yd[i]/cos(alp3))/vw;
            tbike = hypot(Xd[i] - Yd[i]*tan(alp3), (Yg[i] - Xg[i]*tan(alp1)))/vb;
            printf("tiempos %d : w %.5f\n", i, twalk + tbike);
            ans3 = min(ans3, twalk + tbike);
        }
            
    }

    for (int i = 0; i < 4; i++){
        mini = 1;
        resp = 2;
        for(double x = 0; x <=1; x += 0.00001){
            left = x*(sqrt(1-k*k*x*x))/(sqrt(1-x*x)*sqrt(1-k*k-k*k*x*x));
            rightn = Xg[i]*sqrt(1-k*k*x*x)-Yg[i]*k*x;
            rightd = (Yd[i]*sqrt(1-k*k+k*k*x*x)-Xg[i]*k*sqrt(1-x*x));
            if (fabs(left - rightn/rightd) < mini){
                mini = fabs(left - rightn/rightd);
                resp = x;
            }
        }

        if (true || (mini < 1e-5 && fabs(resp) < 1)){              
            alp1 = asin(k*resp);
            alp2 = asin(resp);
            alp3 = asin(k*cos(alp2));
            printf("alpas %.5f %.5f %.5f \n",alp1, alp2, alp3);
            printf("alpas sexa %.5f %.5f %.5f \n",alp1*180/pi, alp2*180/pi, alp3*180/pi);
            twalk = (Yg[i]/cos(alp1) + Xd[i]/cos(alp3))/vw;
            tbike = hypot(Yd[i] - Xd[i]*tan(alp3), (Xg[i] - Yg[i]*tan(alp1)))/vb;
            printf("tiempos %d : w %.5f\n", i, twalk + tbike);
            ans3 = min(ans3, twalk + tbike);
        }
            
    }
            
    printf("%.6f %.6f %.6f\n", ans1, ans2, ans3);
    cout<<mini<<" resp "<<resp<<endl;

    return 0;
}