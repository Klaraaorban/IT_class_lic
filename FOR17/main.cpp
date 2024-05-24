#include <iostream>
#include<cmath>

using namespace std;

int main()
{   int b,k,i,s,n;
    cout<<"szam: "; cin>>n;
    for(k=2;k<=n; k++)
    {
        b=k;
        s=0;
        while(b!=0) {s=s+b%10; b=b/10;}
        i=2;
        while((i<=sqrt(s))&&(s%i!=0)) i++;
        if(i>sqrt(s)&&(s!=1)) cout<<k<<" ";

    }
    return 0;
}
