#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {int n, e, i, j, k, lim, x[50005], y[50005], z[50005], r;
double p;
bool foco;
	cin>>n;
	  memset(x, -1 , sizeof x);
               lim=floor(pow(50000,0.5));
               for (i=0;i<=lim;i++)
        	        for (j=0;j<=lim;j++)
        	            for (k=0;k<=lim;k++)
        	              { e=i*i+j*j+k*k;
        
        	               if(e>50000)break;
        	               if(x[e]==-1)
        	                { x[e]=i;
        	                 y[e]=j;
                             z[e]=k;
        	                }
        	              }
        	            
		  
	while(n--)
	{
	    cin>>r;
        if(x[r]==-1)cout<<-1<<endl;
        else
        cout<<x[r]<<" "<<y[r]<<" "<<z[r]<<endl;
	 //   cout<<lim;

	}
	return 0;
}
