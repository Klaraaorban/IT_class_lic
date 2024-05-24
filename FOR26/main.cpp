#include <iostream>

using namespace std;

int main()
{   int i,k,n;
    cout << "hany: " << endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++) cout<<k<<" "<<endl;
    }
    return 0;
}
