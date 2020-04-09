#include <iostream>
#include <algorithm>
using namespace std;

int main() {long long int n, a[100005], i;
bool no=true;
	// your code goes here
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n-2;i++)
	if(a[i]+a[i+1]>a[i+2])
	{cout<<"YES";no=false;break;}
	if(no)
	cout<<"NO";
	
	return 0;
}
