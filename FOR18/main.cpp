#include <iostream>

using namespace std;

int main()
{
    int a,s=0,i;
    cout<<"szam: "<<endl;
    cin>>a;
    for(i=1; i<=a; i++)
    {
        if(a%i==0) s=s+i12;
    }
    cout<<"a szam osztoinak osszege: "<<s<<endl;
    if(a==s) cout<<"a szam tokeletes"<<endl;
    else cout<<"a szam nem tokeletes"<<endl;
    return 0;
}
