#include <iostream>

using namespace std;

int main()
{
    int a, b,i;
    cout<<"szamot"<<endl;
    cin>>a>>b;
    cout<<"az osszes"<<a<<"es "<<b<<"kozotti szam: "<<endl;
    for(i=a;i<=b;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}
