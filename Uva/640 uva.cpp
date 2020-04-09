#include <iostream>
using namespace std;
long long int sumacifras(long long int N)
{  long long int sum=0;
    while (N)
    {sum+=N%10;
     N/=10;
    }
    return sum;
}

int main() {bool self[1000555];
	// your code goes here
	for(long long int i=1;i<=1000000;i++)
	self[i]=true;
	for(long long int i=1;i<=1000000;i++)
	self[i+sumacifras(i)]=false;
	for(long long int i=1;i<=1000000;i++)
	if(self[i])
	cout<<i<<endl;
	return 0;
}
