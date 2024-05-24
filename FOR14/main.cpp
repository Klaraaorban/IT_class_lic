#include <iostream>

using namespace std;

int main()
{
    int a,b,i,s=0;
    cout << "szamok" << endl;
    cin>>a>>b;
    for(i=a;i<=b; i++)
    {
        s=s+i;
    }
    cout<<"a ket adott szam kozott levo szamok osszege: "<<s<<endl;
    return 0;
}
