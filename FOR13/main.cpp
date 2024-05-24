#include <iostream>

using namespace std;

int main()
{
    int i, s=1;
    cout<<"a 2es szam 0-tol 10-ig levo hatvanyai: "<<endl;
    ///mukodik barmelik szammal csak s=n*s;
    for(i=0; i<=10; i++)
    {
        cout<<i<<". hatvany: "<<s<<endl;
        s=2*s;
    }
    return 0;

}
