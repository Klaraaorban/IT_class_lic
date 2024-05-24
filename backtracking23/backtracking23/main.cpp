#include <iostream>
#include <fstream>
using namespace std;
int a[10][20],n,m;
struct sziget{int oszlop; int sor; int lepes;}v[200];
int mx=1,my=1;
int hovax,hovay;
void beolvas(){
    ifstream f;
    f.open("sziget.in");
    f>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            f>>a[i][j];
            if(a[i][j]>a[mx][my]){
                mx=i;
                my=j;
            }
        }
    for(int i=1;i<=n;i++)
    { for(int j=1;j<=m;j++)
        cout<<a[i][j]<<"  ";
        cout<<endl;}
    cout<<endl;
}
void joelem(int k,bool &je){
    switch(v[k].lepes){
        case 1:{hovax=v[k].sor-1;hovay=v[k].oszlop-1;break;}
        case 2:{hovax=v[k].sor-1;hovay=v[k].oszlop+1;break;}
        case 3:{hovax=v[k].sor+1;hovay=v[k].oszlop+1;break;}
        case 4:{hovax=v[k].sor+1;hovay=v[k].oszlop-1;break;}
        case 5:{hovax=v[k].sor-1;hovay=v[k].oszlop;break;}
        case 6:{hovax=v[k].sor;hovay=v[k].oszlop+1;break;}
        case 7:{hovax=v[k].sor+1;hovay=v[k].oszlop;break;}
        case 8:{hovax=v[k].sor;hovay=v[k].oszlop-1;break;}
    }je=true;
    if(hovax>n || hovax<1 || hovay>m || hovay<1) je=false;
    else if(a[hovax][hovay]>=a[v[k].sor][v[k].oszlop])je=false;
}
void vank(int k, bool &vk){
    v[k].lepes++;
    vk=(v[k].lepes<=8);
}
bool megoldas(int k){
    return(hovax==1 || hovay==1 || hovax==n || hovay==m);
}
void init(int k){
    
    v[k].sor=hovax;
    v[k].oszlop=hovay;
    v[k].lepes=0;
}
void kiir(int k){
    for(int i=1;i<=k;i++)
        cout<<"("<<v[i].sor<<","<<v[i].oszlop<<")";
    cout<<"("<<hovax<<","<<hovay<<")";
    cout<<endl;
}
int main() {
    cout<<"A SZIGET"<<endl;
    cout<<endl;
    beolvas();
    int k=1;
    v[1].sor=mx;
    v[1].oszlop=my;
    v[1].lepes=0;
    bool vk ,je;
    while(k!=0){
        do{
            vank(k,vk);
            if(vk) joelem(k,je);
        }while(vk && !je);
        if(vk && je){
            if(megoldas(k)) kiir(k);
            else{
                k++;
                init(k);
            }}
        else k--;
        
    }
    return 0;
}
