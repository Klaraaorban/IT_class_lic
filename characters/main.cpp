#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
struct elem{int sor; int oszlop;int lepes;}v[11];
int n;
char a[10][10];
int hovax, hovay;
void beolvas(){
ifstream f("karakter.in");
f>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++){
        f>>a[i][j];
    }
}
for(int i=1;i<=n;i++)
{


    for(int j=1;j<=n;j++)
    cout<<a[i][j]<<"  ";
cout<<endl;}
}
void vank(int k,bool &vk){
v[k].lepes++;
vk=(v[k].lepes<=8);
}
bool megoldas(int k){
return(k==2*n-1);
}
void joelem(int k,bool &je){
switch(v[k].lepes){
case 1:{hovax=v[k].sor-1; hovay=v[k].oszlop-1;break;}
case 2:{hovax=v[k].sor-1; hovay=v[k].oszlop;break;}
case 3:{hovax=v[k].sor-1; hovay=v[k].oszlop+1;break;}
case 4:{hovax=v[k].sor; hovay=v[k].oszlop+1;break;}
case 5:{hovax=v[k].sor+1; hovay=v[k].oszlop+1;break;}
case 6:{hovax=v[k].sor+1; hovay=v[k].oszlop;break;}
case 7:{hovax=v[k].sor+1; hovay=v[k].oszlop-1;break;}
case 8:{hovax=v[k].sor; hovay=v[k].oszlop-1;break;}
}je=true;
if(hovax>n || hovax<1 || hovay>n || hovay<1) je=false;

for(int i=1;i<=k;i++){
   if(a[v[i].sor][v[i].oszlop]==a[hovax][hovay]) je=false;
}
}
void init(int k){
v[k].oszlop=hovay;
v[k].sor=hovax;
v[k].lepes=0;
}
void kiir(int k){
for(int i=1;i<=k;i++)
    cout<<a[v[i].sor][v[i].oszlop];

cout<<a[hovax][hovay]<<"  ";
}
int main()
{
    beolvas();
    int k=1;
    v[1].oszlop=1;
    v[1].sor=1;
    v[1].lepes=0;
    bool vk, je;
    while(k!=0){
       do{
        vank(k,vk);
        if(vk) joelem(k,je);
    }while(vk && !je);
    if(vk && je)
    if(megoldas(k))
            kiir(k);
    else {k++; init(k);}
    else k--;}
    return 0;
}
