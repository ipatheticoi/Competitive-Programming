#include <iostream>
#include <math.h>
using namespace std;
double diameter(double s, double r)
{
    return 0.3*pow(1.0*(s-r),0.5);
}

int main() {int i, j, num;
  double a, b,ans=0;
	// your code goes here
	while(cin>>a>>b,a)
	{ans=0;
	    for(i=1;;i++)
	  {if((a*1.0/i<=b))break;
	     if(ans<i*diameter(a*1.0/i,b)||fabs(ans-i*diameter(a*1.0/i,b))<=1e-12)
	    { if(fabs(ans-i*diameter(a*1.0/i,b))<=1e-12)
	      num=0;
	      else
	      { ans=i*diameter(a*1.0/i,b);
	       num=i;}
	    }
	      
	  }
	    cout<<num<<endl;
	}
	return 0;
}
