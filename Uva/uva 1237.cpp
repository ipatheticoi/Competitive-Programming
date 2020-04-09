#include <iostream>
#include <string.h>
using namespace std;

int main() {int t, l[10005], h[10005], i , j,q, r, m, cont, carro;
string s[10005];
  cin>>t;
  while(t--)
  
  {cin>>q;
      for(i=1;i<=q;i++)
      cin>>s[i]>>l[i]>>h[i];
      cin>>r;
      for(i=1;i<=r;i++)
      {cin>>m;
        cont=0;
        for(j=1;j<=q;j++)
          if(m<=h[j]&&m>=l[j])
           {cont++;
            carro=j;
             
           }
        if(cont==1)cout<<s[carro]<<endl;
        else
        cout<<"UNDETERMINED"<<endl;
      }
      if(t!=0)
      cout<<endl;
      
  }
	// your code goes here
	return 0;
}
