#include <iostream>
#include <math.h>
using namespace std;

int main() {long long int t,a ,b ,c, x, y, z, m ,n ,r, M;
	// your code goes here
	cin>>t;
	while(t--)
	{bool can=false;
	 long double a1, b1, c1;

	    
	    cin>>a>>b>>c;
	    	     a1=pow(b,1.0/3);
	     b1=pow(c/3,0.5);
	      r=a/3;
          m=(int)floor(a1);
	     n=(int)floor(b1);
	     M=min(min(r,m),n);
	     cout<<M<<endl<<n;
	     for( x=0; x<=M &&!can; x++)
            for( y=x+1; y<=a-x &&!can; y++){
                  z = a - x - y;
                if(y!=z && x!=z){
                if(x*y*z==b && x*x+y*y+z*z == c){
                cout<<x<<" "<<min(y,z)<<" "<<max(y,z)<<endl;
                can = true;
                }
                                }
                
            }
if(!can)cout<<"No solution."<<endl;

	     /*
	    for(x=-1*m;x<=m&&sol;x++) if(x*x<=c)
	    for(y=-1*n;y<=n&&sol;y++)if(x!=y&&x*x+y*y<=c)
	    for(z=-1*n;z<=n&&sol;z++)
	    if(x+y+z==a&&x*y*z==b&&x*x+y*y+z*z==c&&x!=z&&y!=z)
	   { cout<<x<<" "<<y<<" "<<z;sol=false;
	   }
	   if(sol)
	   {cout<<"No solution."<<endl;}
	    
	    */
	}
	return 0;
}
