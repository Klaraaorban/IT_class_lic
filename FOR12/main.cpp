#include <iostream>

using namespace std;

int main()
{
    int a,b,i,s=0;
    cout<<"szamok: "; cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        if(i%7==0) s=s+i;
    }
    cout<<" a ket szam kozotti 7el oszthato szamok osszege: "<<s<<endl;
    return 0;
}
