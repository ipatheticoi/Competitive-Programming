#include <iostream>

using namespace std;
int N, n, cont[5];
char G[100][100],g[100][100], aux[100];
void rotate();
int main() {
	// your code goes here
	while(cin>>N>>n)
	{ if(N==0)
	  break;
	  for (int i=0;i<N;i++)
	     for (int j=0;j<N;j++)
	            cin>>G[i][j];
      for (int i=0;i<n;i++)
	     for (int j=0;j<n;j++)
	            cin>>g[i][j];

	     for (int e=0;e<3;e++)  
	       {   cont[e]=0;
        	  for (int i=0;i<=N-n;i++)
        	     for (int j=0;j<=N-n;j++) 
        	       {bool ver=true;
        	        for (int k=0;k<n&&ver;k++)
        	           for (int l=0;l<n;l++)
        	             {if(G[i+k][j+l]!=g[k][l])
        	                { ver=false;break;}
        	             }
        	         if(ver)
        	         cont[e]++;
        	       }
        	 for (int w=0;w<n;w++)
	     for (int t=0;t<n;t++)
	          {  aux[w][t]=g[n-t-1][w];
	          }
   for (int w=0;w<n;w++)
	     for (int t=0;t<n;t++)
              strcpy(g[w][t],aux[w][t]);   
	       }       
	          for (int e=0;e<3;e++)  
	          cout<<cont[e]<<" ";
	           cout<<endl;
	}
	return 0;
	
}


