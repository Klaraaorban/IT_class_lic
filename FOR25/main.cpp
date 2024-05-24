#include <iostream>

using namespace std;

int main()
{
    int a,n,s=0,m,i,maxi=0;
    cout<<"hany szam: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"szam";
        cin>>a;
        s=s+a;
        if(a>=maxi) maxi=a;
    }
    cout<<"szamok osszege: "<<s<<endl;
    cout<<"legnagyobb beirt szam: "<<maxi<<endl;

    m=s%maxi;
    while(m!=0)
    {
        s=maxi;
        m=maxi;
        m=s%maxi;
    }
    cout<<"osszeguk es legnagyobb szam lnkoja: "<<maxi <<endl;
    return 0;
}
