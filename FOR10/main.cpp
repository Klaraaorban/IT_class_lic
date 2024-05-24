#include <iostream>

using namespace std;

int main()
{
    int a,s,i;
    cout<<"az osszes haromjegyu paros szamjegyosszegu szam: "<<endl;
    for(i=100; i<=999; i++)
    {
        a=i;
        s=0;
        while(a!=0)
        {
            s=s+a;
            a=a/10;
        }
        if(s%2==0) cout<< i<<" ";
    }
    return 0;
}
