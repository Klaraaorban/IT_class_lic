#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i;
    cout<<"szam: "; cin>>n;
    for(i=2; i<=n; i++)
    {
        int k=2;
        while((k<=sqrt(i))&&(i%k!=0)) k++;
        if(k>sqrt(i)) cout<<i<<" ";
    }
    return 0;
}
