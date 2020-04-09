#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,cont=0;
	char cock[100005];
	cin>>n;
	for (int i=1;i<=n;i++)
    cin>>cock[i];
    char inicio=cock[1];
    for (int i=2;i<n;i++)
    {
        if(i%2==0&&cock[i]==inicio&&cock[i+1]!=inicio)
        {i++;cont++;}
        else if(i%2==0&&cock[i]==inicio&&cock[i+1]==inicio)
        cont++;
        else if (i%2==1&&cock[i]!=inicio&&cock[i+1]==inicio)
        {i++;cont++;}
        else if(i%2==1&&cock[i]!=inicio&&cock[i+1]!=inicio)
        cont++;
    }
    if(n%2==0&&cock[n]==inicio)
    cont++;
    else if(n%2==1&&cock[n]!=inicio)
    cont++;
    cout<<cont;

	return 0;
}
