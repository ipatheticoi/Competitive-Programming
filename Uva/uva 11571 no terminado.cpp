#include <iostream>
#include <math.h>
using namespace std;

int main() {long long int t,a ,b ,c, x, y, z, m ,n ;
	// your code goes here
	cin>>t;
	while(t--)
	{bool sol=true;
	 long double a1, b1, c1;
	     a1=pow(b,1.0/3);
	     b1=pow(c,0.5);
	     m=(int)floor(a1);
	     n=(int)floor(b1);
	    cin>>a>>b>>c;
	    	     a1=pow(b,1.0/3);
	     b1=pow(c,0.5);
	     m=(int)floor(a1);
	     n=(int)floor(b1);
	    for(x=-1*m;x<=m&&sol;x++) if(x*x<=c)
	    for(y=-n;y<=n&&sol;y++)if(x!=y&&x*x+y*y<=c)
	    for(z=-n;z<=n&&sol;z++)
	    if(x+y+z==a&&x*y*z==b&&x*x+y*y+z*z==c&&x!=z&&y!=z)
	   { cout<<x<<" "<<y<<" "<<z;sol=false;
	   }
	   if(sol)
	   {cout<<"No solution."<<endl;}
	    
	    
	}
	return 0;
}
