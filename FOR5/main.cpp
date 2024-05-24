#include <iostream>

using namespace std;

int main()
{
    int a,i,db=0;
    cout<<"szam"; cin>>a;
    for(i=1; i<=a; i++)
    {
        if(a%i==0) db++;
    }
    cout<<"a szamnak "<<db<< " darab osztoja van"<<endl;

    if (db==2) cout<<"a szam prim"<<endl;
    else cout<<"a szam nem prim"<<endl;
    return 0;
}
