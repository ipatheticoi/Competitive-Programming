#include <iostream>
#include <string.h>
using namespace std;

int main() {bool primo[15055][5];
memset(primo,true, sizeof primo);
 //bool primo[2][1]=true;
 for(int i=2;i<=1000;i++)
     for(int j=i*i;j<=1000;j=j+i)
       if(primo[i])
        primo[j][1]=false;
 for(int i=2;i<=1000;i++)
   if(primo[i][1])
   {//cout<<i;
     for(int j=i+1;j<=1000;j++)
       if(primo[j][1])
         {//cout<<j<<endl;
             if(primo[i+j+1][1])
            primo[i+j+1][2]=false;break;
         }
}
 int cont=0, n, k;
  cin>>n>>k;
 for(int i=2;i<=n;i++)
    if(primo[i][2]==false)
     { cont++;//cout<<i<<endl;
     }
  //  cout<<cont<<endl;
 cont>=k?cout<<"YES":cout<<"NO";
	// your code goes here
	return 0;
}
