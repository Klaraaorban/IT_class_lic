#include <iostream>

using namespace std;

int main()
{
    int a,a1,i,s=0;
    cout << "Számot!" << endl;
    cin >> a;
    while (a!=0)
    {
        s=s+a%10;
        a=a/10;
    }
    cout << "A számjegyösszege: " << s << endl;
    cout << "Számjegyösszegének osztói: " << endl;
    for (i=1;i<=s;i++)
    {
        if (s%i==0) cout << i << "  ";
    }
    return 0;
}
