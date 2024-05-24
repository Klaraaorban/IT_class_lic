#include <iostream>

using namespace std;

int main()
{
    int n, a=1,b=1,c,i ;
    cout << "hany tagjat irjuk ki a fibonacci szamsorozatnak: " << endl;
    cin>>n;
    for(i=3;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}
