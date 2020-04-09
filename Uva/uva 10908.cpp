#include <iostream>
using namespace std;
int t, M, N, Q, i, j, r, c;
char sq[105][105];
bool foco;
int length()
{char s;
int cont;
  s=sq[r][c];
  foco=true;
  cont=0;
  while(foco&&r-1-cont>=0&&c-1-cont>=0&&r+1+cont<=M-1&&c+1+cont<=N-1)
       {   for(i=-1-cont;i<=1+cont;i++)
                for(j=-1-cont;j<=1+cont;j++)
                     {if(sq[r+i][c+j]!=s)
                       foco=false;
                         
                     }
          
          if(foco==true)cont++;
       }
   return cont*2+1;
    
}
int main() {

cin>>t;
while(t--)
{
    cin>>M>>N>>Q;
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
           cin>>sq[i][j];
           cout<<M<<" "<<N<<" "<<Q<<endl;
    while(Q--)
    {
        cin>>r>>c;
        cout<<length()<<endl;
        
    }
    
}
	return 0;
}
