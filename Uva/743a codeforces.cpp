#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int n, a, b, i, m=1000005;
	string s;
	cin>>n>>a>>b;
	cin>>s;
	if(s[a-1]!=s[b-1])
    {cout<<1;
    }
	else
	cout<<0;
	return 0;
}
