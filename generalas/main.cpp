#include <iostream>
#include <fstream>
using namespace std;
int n,m,x,y;
int hovax, hovay;
struct elem{int sor; int oszlop; int lepes;}v[100];
int a[10][10];
void beolvas(){
ifstream f("szjegyek.in");
f>>n>>m>>x>>y;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        f>>a[i][j];
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cout<<a[i][j]<<"  ";
        cout<<endl;
}
}
void vank(int k, bool &vk){
v[k].lepes++;
vk=(v[k].lepes<=4);
}
void joelem(int k, bool &je){
switch(v[k].lepes){
case 1: {hovax=v[k].sor-1; hovay=v[k].oszlop;break;}
case 2: {hovax=v[k].sor; hovay=v[k].oszlop+1;break;}
case 3: {hovax=v[k].sor+1; hovay=v[k].oszlop;break;}
case 4: {hovax=v[k].sor; hovay=v[k].oszlop-1;break;}
}je=true;
if(hovax<1 || hovax>n || hovay<1 || hovay>n) je=false;
int s=0;
for(int i=1;i<=k;i++) s=s+a[v[i].sor][v[i].oszlop];
if(s+a[hovax][hovay]>m)je=false;
}
bool megoldas(int k){
int s=0;
for(int i=1;i<=k;i++)
{
    s=s+a[v[i].sor][v[i].oszlop];
}s=s+a[hovax][hovay];
return(s==m);
}
void kiir(int k){
for(int i=1;i<=k;i++)
    cout<<v[i].sor<<"  "<<v[i].oszlop;
cout<<endl;
cout<<hovax<<","<<hovay;
}
int main()
{
    beolvas();
    bool vk, je;
    int k=1;
    while(k!=0){
        do{
            vank(k, vk);
            if(vk) joelem(k,je);
        }while(vk && !je);
        if(vk && je)
            {if(megoldas(k)) kiir(k);
        else{k++; v[k].sor=hovax;
        v[k].oszlop=hovay;
        v[k].lepes=0;}}
        else k--;
    }
    return 0;
}
