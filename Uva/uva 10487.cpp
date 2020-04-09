#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n, m , s[1005], q[1005], i ,j ,k, cont=0,ans , l,p;
	while(cin>>n,n)
    {     cont++;
          cout<<"Case "<<cont<<":"<<endl; 
           for (i=1;i<=n;i++)
        	  cin>>s[i];
        	  cin>>m;
        	 for (i=1;i<=m;i++)
        	    cin>>q[i];
        	 for (i=1;i<=m;i++)
        	 {ans=1000000;
        	    for(j=2;j<=n;j++)
        	     for(k=1;k<j;k++)
        	       if(ans>abs(q[i]-s[j]-s[k]))
        	       {l=j;
        	        p=k;
        	        ans=abs(q[i]-s[j]-s[k]);
        	       }
        	  cout<<"Closest sum to "<<q[i]<<" is "<<s[p]+s[l]<<"."<<endl;

        	 }
	}
	return 0;
}
