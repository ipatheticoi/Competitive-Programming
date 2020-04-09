#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdlib>
using namespace std;


int main() {
long long int m, n, i, j ,k, t, rec[107][107], cont, row[107],sum;
string s[105];
while(cin>>n)
{if(n==0)
  break;
  memset(rec,0,sizeof rec);
    cin>>m;
for(i=1;i<=n;i++)
    cin>>s[i];

  for(i=1;i<=n;i++)
    {//istringstream ss(s[i]);
     for(j=0;j<m;j++)
      {//ss>>rec[i][j];
         rec[i][j+1]=(s[i][j]-'0') ;
        // cout<<rec[i][j+1];
      }
     // cout<<endl;
    }
   cont=0; 
  for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
      {   
           if(i>1)rec[i][j]+=rec[i-1][j];
           if(j>1)rec[i][j]+=rec[i][j-1];
           if(i>1&&j>1)rec[i][j]-=rec[i-1][j-1];
           

      }

 
    }

  for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
      for(k=1;k<=i;k++)
        for(t=1;t<=j;t++)
           {  sum=rec[i][j];
               if(k>1)sum-=rec[k-1][j];
               if(t>1)sum-=rec[i][t-1];
               if(k>1&&t>1)sum+=rec[k-1][t-1];
               if(sum==((i-k+1)*(j-t+1)))
               cont++;
           }
           cout<<cont<<endl;
}
	return 0;
}
