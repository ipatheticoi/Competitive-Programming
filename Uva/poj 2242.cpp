#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>

#define pi = 3.141592653589793;
using namespace std;

int main() {double x1,y1,x2,y2,x3,y3, area,a, b,c, radio;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
  {area=(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1)/2;
   a=hypot(x1-x2,y1-y2);
   b=hypot(x2-x3,y2-y3);
   c=hypot(x3-x1,y3-y1);
   radio=(a*b*c)/(4*area);
   radio=fabs(radio);
   printf("%.2f\n",2*3.141592653589793*radio);
  }
    

	return 0;
}
