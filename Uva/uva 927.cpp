#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int a[21], b, c, i, j,k ,d;
vector<int> x;
long long int fun(long long int s)
{long long int valor=0;
   for(j=0;j<=c;j++)
    valor+=a[j]*pow(s,j);
    return valor;
    
}
int main() {
cin>>b;
int suma=0;
for(i=1;;i++)
{suma+=i;
if(suma>=1100000)break;
  for(j=1;j<=i;j++)
  x.push_back(i);

    
}
while (b--)
{ cin>>c;
  for(i=0;i<=c;i++)
  {cin>>a[i];}
  cin>>d;
  cin>>k;
  cout<<fun(x[(k-1)/d])<<endl;
  
}

	return 0;
}