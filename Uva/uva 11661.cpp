#include <iostream>
#include <algorithm>
using namespace std;

int main() {long long int a, b, c, i, j, contR, contD,R[2000000], D[2000000], ans;
char s[2000000];
bool foco=false;
while (cin>>a,a)
{  contR=0;
contD=0;
foco=false;
    for( i=1;i<=a;i++)
    {   cin>>s[i];
        if(s[i]=='Z'&&foco==false)
        {foco=true;cout<<0<<endl;}
        if(s[i]=='R')
        {R[contR+1]=i;
         contR++;
        }
        else if(s[i]=='D')
        {D[contD+1]=i;
         contD++;
            
        }
   }
   ans=2000001;
   if(foco==false)
    {for(i=1;i<=contD;i++)
      for(j=1;j<=contR;j++)
        ans=min(ans,abs(D[i]-R[j]));
            
        cout<<ans<<endl;
        
    }
}

	return 0;
}
