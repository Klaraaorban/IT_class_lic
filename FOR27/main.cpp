#include <iostream>

using namespace std;

int main()
{
    int a,b,s=0,db=0,i;
    cout <<"SZAMOK KOZOTT: " << endl;
    cin>>a>>b;
    for(i=a;i<=b; i++)
    {
        if(i%5==0)
        {
            s=s+i;
            db++;
        }
    }
    cout<<"a szamok kozotti ottel oszthato szamok ossz: "<<s<<endl;
    cout<<"ezen szamok mennyisege: "<<db<<endl;
    cout<<"atlaguk: "<<(float)s/db<<endl;
    return 0;
}
