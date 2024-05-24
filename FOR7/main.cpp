#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,i, k, f=0, db=0, fdb=0;
    cout<<"szam: "; cin>>a;
    for(i=1; i<=a; i++)
    {
        if(a%i==0) db++;
    }
    while(a!=0)
    {
        f=10*f+a%10;
        a=a/10;
    }
    for(k=1; k<=f; k++)
    {
        if(f%k==0) fdb++;
    }
     if (db==fdb) cout << "A szam eros prim!" << endl;
    else cout << "A szam NEM eros prim!" << endl;

    return 0;
}
