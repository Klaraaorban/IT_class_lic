#include <iostream>

using namespace std;

int main()
{
    int a,b,i, db=0;
    cout<<"szam "<<endl;
    cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        if(i%5==0) db++;
    }
    cout<<"a es b kozott "<<db<<" darab 5-el oszthato szam van";
    return 0;
}
