#include <iostream>
using namespace std;
struct elem{int sor; int oszlop; int lepes;} v[100];
int n, hovax,hovay;
void vank(int k,bool &vk){
    v[k].lepes++;
    vk=(v[k].lepes<=8);
}
void joelem(int k, bool &je){
    switch(v[k].lepes){
            case 1: {hovax=v[k].sor-2;hovay=v[k].oszlop-1;break;}
            case 2:{hovax=v[k].sor-2; hovay=v[k].oszlop+1; break;}
            case 3:{hovax=v[k].sor-1;hovay=v[k].oszlop-2;break;}
            case 4:{hovax=v[k].sor-1; hovay=v[k].oszlop+2;break;}
            case 5:{hovax=v[k].sor+1; hovay=v[k].oszlop-2;break;}
            case 6:{hovax=v[k].sor+1; hovay=v[k].oszlop+2;break;}
            case 7:{hovax=v[k].sor+2; hovay=v[k].oszlop-1;break;}
            case 8:{hovax=v[k].sor+2; hovay=v[k].oszlop+1;break;}
    }je=true;
    if(hovax<1 || hovax>n || hovay<1 || hovay>n) je=false;
    for(int i=1;i<=k;i++)
        if(v[i].sor==hovax && v[i].oszlop==hovay) je=false;
}
bool megoldas(int k){
    
    return(hovax==n && hovay==n);
}
void kiir(int k){
    for(int i=1;i<=k;i++)
        cout<<"("<<v[i].sor<<","<<v[i].oszlop<<")";
    cout<<"("<<hovax<<","<<hovay<<")";
    cout<<endl;
}
void init(int k){
    v[k].sor=hovax;
    v[k].oszlop=hovay;
    v[k].lepes=0;
}
int main() {
    cin>>n;
    int k=1;
    v[1].sor=1;
    v[1].oszlop=1;
    v[1].lepes=0;
    bool vk,je;
    while(k!=0){
        do{
            vank(k,vk);
            if(vk) joelem(k,je);
        }while(vk && !je);
        if(vk && je)
            if(megoldas(k)) kiir(k);
            else{k++; init(k);}
            else k--;
    }
    return 0;
}
