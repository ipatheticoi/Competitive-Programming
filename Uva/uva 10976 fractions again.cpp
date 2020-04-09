#include <iostream>
using namespace std;

int main() {int k, cont;
while(cin>>k)
{ cont=0;
  for (int i=k+1;i<=2*k;i++)
  if(k*i%(i-k)==0)
  cont++;
  cout<<cont<<endl;
   for (int i=k+1;i<=2*k;i++)
  if(k*i%(i-k)==0)
  cout<<1<<"/"<<k<<" = 1/"<<k*i/(i-k)<<" + 1/"<<i<<endl;


}
	return 0;
}
