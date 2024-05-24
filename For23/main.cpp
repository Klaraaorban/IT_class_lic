#include <iostream>
///nemfutle
using namespace std;

int main()
{
    int a,f=0,l;
    cout<<"szam: "<<endl;
    cin>>a;
    while(a!=0)
    {
        l=a%10;
        f=10*f+l;
        a=a/10;
    }
    int u=0;
    while(f!=0)
    {
        u=f%10;
        for(int i; i<=u;i++)
        f=f/10;
    }
    cout<<u<<endl;
    return 0;
}
