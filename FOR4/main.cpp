#include <iostream>

using namespace std;

int main()
{
    int a,b,i,s=0;
    cout<<"szamok "<<endl;
    cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        if(i%10==1) s=s+i;
    }
    cout<<"a es b kozott levo 1-el vegzodo szamok osszege: "<<s<<endl;
    return 0;
}
