#include <iostream>
using namespace std;

int main() {long long int fibonacci[5001][1501]={0}, x;
int d=0;
for (int i=2;i<=5000;i++)
    for (int j=1;j<1500;j++)
        fibonacci[i][j]=0;
fibonacci[0][1]=0;
fibonacci[1][1]=1;

    for (int i=2;i<=5000;i++)
    for (int j=1;j<=1500;j++)
    { fibonacci[i][j]=fibonacci[i-1][j]+fibonacci[i-2][j]+d;
     if(fibonacci[i][j]>=10)
       { d=1;
        
        fibonacci[i][j]=fibonacci[i][j]-10;
       }
       else d=0;
    }
while(cin>>x)
{ 
    cout<<"The Fibonacci number for "<<x<<" is ";
 if(x==0)
 cout<<0<<endl;
 else
  {bool foco=false;
   for (int j=1500;j>=1;j--)
   if(fibonacci[x][j]!=0||foco)
   {cout<<fibonacci[x][j];foco=true;}
   cout<<endl;
}
}
	// your code goes here
	return 0;
}
