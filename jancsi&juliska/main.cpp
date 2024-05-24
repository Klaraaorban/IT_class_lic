#include <iostream>
#include <fstream>
using namespace std;
int n,m,x,y;
int a[10][10];
int hovax,hovay;
struct jj{int sor;int oszlop;int lepes;} v[100];
void beolvas(){
ifstream f("jj.in");
f>>n>>m>>x>>y;
for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    f>>a[i][j];
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;}
}
void vank(int k, bool &vk){
v[k].lepes++;
vk=(v[k].lepes<=8);
}
bool megoldas(int k){
return(hovay==1 || hovay==m || hovax==1 || hovax==n);
}
void joelem(int k, bool &je){
switch(v[k].lepes){
case 1:{hovax=v[k].sor-1; hovay=v[k].oszlop-1;break;}
case 2:{hovax=v[k].sor-1; hovay=v[k].oszlop;break;}
case 3:{hovax=v[k].sor-1; hovay=v[k].oszlop+1;break;}
case 4:{hovax=v[k].sor; hovay=v[k].oszlop+1;break;}
case 5:{hovax=v[k].sor+1; hovay=v[k].oszlop+1;break;}
case 6:{hovax=v[k].sor+1; hovay=v[k].oszlop;break;}
case 7:{hovax=v[k].sor+1; hovay=v[k].oszlop-1;break;}
case 8:{hovax=v[k].sor; hovay=v[k].oszlop-1;break;}
} je=true;
if(hovax<1 || hovax>n || hovay<1 || hovay>m) je=false;
if(a[hovax][hovay]==1) je=false;
for(int i=1;i<=k;i++)
{
    if(v[i].sor==hovax && v[i].oszlop==hovay) je=false;
}
}
void init(int k){
v[k].oszlop=hovax;
v[k].sor=hovay;
v[k].lepes=0;
}
void kiir(int k){
for(int i=1;i<=k;i++)
    cout<<v[i].sor<<" , "<<v[i].oszlop<<"->";

cout<<hovax<<","<<hovay<<endl;
}
int main()
{
    beolvas();
     int k=1;
    v[1].oszlop=y;
    v[1].sor=x;
    v[1].lepes=0;
    bool vk, je;
    while(k!=0)
    {
        do
        {
            vank(k,vk);
            if(vk) joelem(k,je);
        }
        while(vk && !je);
        if(vk && je)
            if(megoldas(k))
            {kiir(k);}
            else
            {
                k++;
                init(k);
            }
        else k--;
    }
    return 0;
}
