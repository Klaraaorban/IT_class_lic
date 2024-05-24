#include <iostream>

using namespace std;

int main()
{
    int a, s=0, k=2;
    cout<<"Szam: "<<endl;
    cin>>a;
    while(a!=1)
    {
        if(a%k==0)
        {
            s=s+k;
            while(a%k==0) a=a/10;
        }
        k++;
    }
    cout<<" a szam primosztoinak osszege: "<<s<<endl;
    return 0;
}
