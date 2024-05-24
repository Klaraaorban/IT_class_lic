#include <iostream>

using namespace std;

int main()
{
    int i,f,k=2,s=0,db=0,oszto=0,p;
    for(i=1000;i<=9999;i++)
    {
        p=i;
        while(p!=0) {s=s+p%10; p=p/10;}
        for(f=1;f<=s;f++)
        {
            if(f%k==0) {oszto++;k++;}
        }
        if((s!=1)&&(oszto>2)) db++;
    }
    cout<<"a negyjegyu prim szamjegyosszegu szamok szama: "<<db<<endl;
    return 0;
}
