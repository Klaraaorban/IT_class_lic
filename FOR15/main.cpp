#include <iostream>

using namespace std;

int main()
{
    int a,a1,i,s=0;
    cout << "Sz�mot!" << endl;
    cin >> a;
    while (a!=0)
    {
        s=s+a%10;
        a=a/10;
    }
    cout << "A sz�mjegy�sszege: " << s << endl;
    cout << "Sz�mjegy�sszeg�nek oszt�i: " << endl;
    for (i=1;i<=s;i++)
    {
        if (s%i==0) cout << i << "  ";
    }
    return 0;
}
