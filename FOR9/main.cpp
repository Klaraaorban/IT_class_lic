#include <iostream>

using namespace std;

int main()
{
   int a,b,m,i,db=0;
   cout<<"szamok: "; cin>>a>>b;
   while(m!=0)
   {
       a=b;
       b=m;
       m=a%b;
   }
   for(i=1; i<=b; i++)
   {
       if(b%i==0) db++;
   }
   if(db==2) cout<<" a legnagyobb kozos osztojuk primszam"<<endl;
   else cout<<"legnagyobb kozos osztoinak szama: "<<db<<endl;
    return 0;
}
