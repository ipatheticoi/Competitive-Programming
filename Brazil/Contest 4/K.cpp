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
        for(int j = 0; j < 4; j++){
            // razante
            if(i==j){
                double Xg [] = {xg, yg, (x2 - xg),(y2 - yg)};
                double Xd [] = {xd, xg, (x2 - xd), (y2 - yd)};
                double Yg [] = {yg, xg, yg, xg};
                double Yd [] = {yd, xd, yd, xd};
                d = Xg[i]*tan(acrit) + Xd[i]*tan(acrit);
                if(d > fabs(Yg[i] - Yd[i])) continue;
                ans2 = min(ans2, (Xg[i]/cos(acrit) + Xd[i]*cos(acrit))/vw + (fabs(Yg[i]-Yd[i]) - d));

            }

            if((i%2) != (j%2)){
                for(double x = 0; x <=1; x += 0.00001){
                    left = x*(sqrt(1-k*k*x*x))/(sqrt(1-x*x)*sqrt(1-k*k-k*k*x*x));
                    rightn = (Yg*sqrt(1-k*k*x*x)-xg*k*x;
                    rightd = (xd*sqrt(1-k*k+k*k*x*x)-(y2-yd)*k*sqrt(1-x*x));
                    if (fabs(left - rightn/rightd) < mini){
                        mini = fabs(left - rightn/rightd);
                        resp = x;
                    }
                    alp1 = asin(k*resp);
                    alp2 = asin(resp);
                    alp3 = asin(k*cos(alp2));
                    printf("alpas %.5f %.5f %.5f \n",alp1, alp2, alp3);
                    printf("alpas sexa %.5f %.5f %.5f \n",alp1*180/pi, alp2*180/pi, alp3*180/pi);
                    twalk = (xg/cos(alp1) + (y2-yd)/cos(alp3))/vw;
                    tbike = hypot(xd - (y2 - yd)*tan(alp3), ((y2-yg) - xg*tan(alp1)))/vb;
                    ans3 = min(ans3, twalk + tbike);
                }

                for(double x = 0; x <=1; x += 0.00001){
                    left = x*(sqrt(1-k*k*x*x))/(sqrt(1-x*x)*sqrt(1-k*k-k*k*x*x));
                    rightn = (y2-yg)*sqrt(1-k*k*x*x)-xg*k*x;
                    rightd = (xd*sqrt(1-k*k+k*k*x*x)-(y2-yd)*k*sqrt(1-x*x));
                    if (fabs(left - rightn/rightd) < mini){
                        mini = fabs(left - rightn/rightd);
                        resp = x;
                    }
                    alp1 = asin(k*resp);
                    alp2 = asin(resp);
                    alp3 = asin(k*cos(alp2));
                    printf("alpas %.5f %.5f %.5f \n",alp1, alp2, alp3);
                    printf("alpas sexa %.5f %.5f %.5f \n",alp1*180/pi, alp2*180/pi, alp3*180/pi);
                    twalk = (xg/cos(alp1) + (y2-yd)/cos(alp3))/vw;
                    tbike = hypot(xd - (y2 - yd)*tan(alp3), ((y2-yg) - xg*tan(alp1)))/vb;
                    ans3 = min(ans3, twalk + tbike);
                }
            }
        }
    }
          
    /*cout<<ans2<<"xd"<<endl;
        cout<<acrit<<endl;
        cout<<d<<endl;
        cout<<xg-xd<<endl;
        cout<< (fabs(xg-xd) -d)/vb <<endl;
        cout << (y2 - yg)/cos(acrit) + (y2 - yd)*cos(acrit) <<endl;
        cout << (y2 - yg)<<" " << (y2 - yd)<<endl;
    */

    cout<<mini<<" resp "<<resp<<endl;
    
    
    printf("mierda: %.7f\n",(xg/cos(alp1) + (y1-yd)/cos(alp3))/vw);
    printf("mierda: %.7f\n",tmin);
    if(d < fabs(xg - xd)){
        ans2 = ((y2 - yg)/cos(acrit) + (y2 - yd)*cos(acrit))/vw + (fabs(xg-xd) -d)/vb;
    }
    cout<<ans2<<"xd"<<endl;

    /*
    xparedi[0] = x1; yparedi[0] = yg;
    xparedi[1] = xg; yparedi[1] = y1;
    xparedi[2] = x2; yparedi[2] = yg;
    xparedi[3] = xg; yparedi[3] = y2;

    xparedf[0] = x1; yparedf[0] = yd;
    xparedf[1] = xd; yparedf[1] = y1;
    xparedf[2] = x2; yparedf[2] = yd;
    xparedf[3] = xd; yparedf[3] = y2;

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++){
            double aux = 0;
            aux += hypot(double(xparedi[i] - xg), double(yparedi[i] - yg));
            aux += 
        }
    */
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++){
            if(i != j){
                break;
            }
        }
    //ans2





    return 0;
}