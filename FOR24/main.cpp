#include <iostream>

using namespace std;

int main()
{
    int n,s=0,a;
    cout << "szamot: " << endl;
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        cout<<"szam: ";
        cin>>a;
        s=s+a;
    }
    cout<<"szamok osszege "<<s<<endl;
    cout<<"szamok atlaga "<<s/n<<endl;
    return 0;
}

