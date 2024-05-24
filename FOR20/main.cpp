#include <iostream>

using namespace std;

int main()
{
    int a,b,i,s=0;
    cout<<"szamok: ";cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        int u=i%10;
        if(u%3==0) s=s+i;
    }
    cout<<"a ket szam kozotti harommal oszthato szamjegyben vegzodo szamok osszege: "<<s<<endl;
    return 0;
}
