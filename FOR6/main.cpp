#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int a, k=2;
    cout<<"szam: "; cin>>a;
    while((a%k!=0)&&(k<=sqrt(a))) k++;
    if(k<=sqrt(a)) cout<<"a szam nem prim"<<endl;
    else cout<<"a szam prim"<<endl;
        return 0;
}
