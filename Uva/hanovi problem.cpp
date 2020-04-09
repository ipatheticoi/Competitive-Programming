#include <iostream>
using namespace std;
void hanovi(int n, char primero, char segundo, char tercero)
{
    if(n==1)
    {cout<<1<<" va a "<<tercero<<endl;return;}
    else
    {
        hanovi(n-1,primero,tercero,segundo);
        cout<<n<<" va a "<<tercero<<endl;
        hanovi(n-1,segundo,primero,tercero);
        
    }
    
}
int main() {int n;
    cin>>n;
    hanovi(n,'A','B','C');
	return 0;
}
