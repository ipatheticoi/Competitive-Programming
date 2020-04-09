#include <iostream>
using namespace std;

int main() {int t, h, r, td[150][150], hd[150][150],rd[150][150], i, j, k, l, m, n;
 while(cin>>t>>r>>h)
 {
     for (int i=1;i<=t;i++)
        for (int j=1;j<=r+1;j++)
            cin>>td[i][j];
     for (int i=1;i<=r;i++)
        for (int j=1;j<=h+1;j++)
            cin>>rd[i][j];
      for (int i=1;i<=h;i++)
        for (int j=1;j<=t+1;j++)
            cin>>hd[i][j];   
    int ans=100000000;
    l=-1;
   for (int i=1;i<=t;i++)
        for (int j=2;j<=r+1;j++)
           if(td[i][j]==0)
               for (int k=2;k<=h+1;k++)
                 //    for (int l=2;j<=l+1;l++)
                        if(rd[j-1][k]==0&&hd[k-1][i+1]==0)
                            {if(ans>td[i][1]+rd[j-1][1]+hd[k-1][1])
                              {  ans=td[i][1]+rd[j-1][1]+hd[k-1][1];
                                  l=i-1;
                                  m=j-2;
                                  n=k-2;
                              } 
                            }
    if(l!=-1)                    
    cout<<l<<" "<<m<<" "<<n<<":"<<ans<<endl;
    
    else 
    cout<<"Don't get married!"<<endl;
 }
	// your code goes here
	return 0;
}