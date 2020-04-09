#include <iostream>
using namespace std;

int main() {long long int N=100000000;
 
 long long int a[N];
 long long int numeven[N];
      
        for (long long int i=1; i<=N;i++ )
         a[i]=1;
        for (long long int i=2; i<=N;i++ )
        {  
           for(long long int j=i;j<=N;j=j+i)
           a[j]+=i;
        }
        int cont=0;
        for (long long int i=1; i<=N;i++ )
        { if(a[i]%2==0)
         {cont++;
            
         }
        numeven[i]=cont; 
     
        }
        int r;
 while(cin>>r)
    { if (r==0)
      break;
     cout<<numeven[r]<<endl;
    }
	// your code goes here
	return 0;
}
