#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int a, b, c[1000000]={0}, x[1000000], i, j;
	cin>>a;
	while(a--)
	{ memset(c,0, sizeof c);
	    cin>>b;
	    for(i=1;i<=b;i++)
	    cin>>x[i];
	    for(i=2;i<=b;i++)
	      for(j=1;j<i;j++)
	        if(x[j]<=x[i])
	        c[i]++;
	        int sum=0;
	    for(i=2;i<=b;i++)
	    sum+=c[i];
	    cout<<sum<<endl;
	}
	return 0;
}
