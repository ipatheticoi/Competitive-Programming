#include <iostream>
#include <vector>
using namespace std;
bool primo[46350];
vector<int> pi;
long long int a;
int main() {
	// your code goes here
	for(int i=0;i<=46350;i++)
	primo[i]=true;
	primo[0]=false;
	primo[1]=false;
    for(int i=4;i<=46350;i+=2)
      primo[i]=false;
    for(long long int i=3;i<=46350;i++)
      {if (primo[i])
        for(long long int j=i*i;j<=46350;j+=2*i)
          primo[j]=false;
      }
    pi.push_back(2);
    for(int i = 3; i <= 46350; i += 2)
		if(primo[i]) 
		pi.push_back(i);

    while (cin>>a)
    { long long int euler=1;
      long long int divi=1;
      long long int r=a;
        for(int i=0;i<pi.size();i++)
             { if(a%pi[i]==0)
               {   int cont=0;
                    while (a%pi[i]==0)
                      {
                          a=a/pi[i];
                          euler=euler*pi[i];
                          cont++;
                      }
                       euler=euler*(pi[i]-1)/pi[i];
                       divi=divi*(cont+1);
               }
             }
         
        if(a==1)
        cout<<r-euler-divi+1<<endl;
        else
        cout<<r-euler*(a-1)-divi*2+1<<endl;
    }
	return 0;
}
