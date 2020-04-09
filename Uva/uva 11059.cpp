#include <iostream>
using namespace std;

int main() {long long int a, x[1000], c=1;
	// your code goes here

	while(cin>>a)
	{
	   for(int i=1;i<=a;i++)
	   {cin>>x[i];
	       
	   }
	long long   int prod=1, ans=-1000000;
	       for (int i=1;i<=a;i++)
	        for(int j=i;j<=a;j++)
	           { prod=1;
	               for(int k=i;k<=j;k++)
	             prod*=x[k];
	             ans=max(ans,prod);
	           }
	       if (ans>0)
	       cout<<"Case #"<<c<<": The maximum product is "<<ans<<"."<<endl<<endl;
 else 
	       cout<<"Case #"<<c<<": The maximum product is "<<0<<"."<<endl<<endl;
	       c++;
	   
	}
	return 0;
}
