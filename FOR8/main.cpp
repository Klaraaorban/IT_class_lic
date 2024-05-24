#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"szam: "; cin>>n;
    cout<<"az elso "<<n<<" darab paros termeszetes szam"<<endl;
    for(i=1;i<=n; i++)
    {
        cout<<2*i<<" ";
    }
    return 0;
}
