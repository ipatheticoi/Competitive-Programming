#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {int f, r, fd[1000], rd[1000], i ,j ;
double dr[100000], ans;
           
     while(cin>>f,f)      
{
           cin>>r;
           for(i=1;i<=f;i++)
           cin>>fd[i];
           for(i=1;i<=r;i++)
           cin>>rd[i];
           int cont=0;
           for(i=1;i<=f;i++)
                for(j=1;j<=r;j++)
                   { cont++;
                       dr[cont]=rd[j]*1.0/fd[i];
                 
                   }
                   sort (dr+1, dr+cont+1);
                   ans=-1;
                   for(i=1;i<cont;i++)
                     ans = max(ans,dr[i+1]*1.0/dr[i] );
                    printf("%.2lf\n",ans);
}
	return 0;
}
