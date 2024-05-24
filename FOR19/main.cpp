#include <iostream>

using namespace std;

int main()
{
    int a,i,s,k,n;
    cout<<"szam: "; cin>>n;
    for(k=2;k<=n;k++)
    {
        a=k;
        s=0;
        for(i=1;i<a;i++)
        {
            if(a%i==0) s=s+i;
        }
        if(a==s)   cout<<"a szamnal kisebb tokeletes szamok: "<<s<<endl;
    }
    return 0;
}
