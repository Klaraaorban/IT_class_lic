#include <iostream>
#include <fstream>
using namespace std;
int a[20][20], n;
int v[20];
void beolvas(){
    
    ifstream f("be.in");
    f>>n;
    int i,j;
    while(f>>i>>j){
        a[i][j]=1;
        a[j][i]=1;
    }f.close();
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<"  ";
    cout<<endl;
}
void vank(int k,bool &vk){
    v[k]++;
    vk=(v[k]<=n);
}
void joelem(int k,bool &je){
    
    if (a[v[k-1]][v[k]]==1) je=true;
    else je=false;
    for(int i=2;i<k;i++)
        if(v[i]==v[k]) je=false;

}
bool megoldas(int k){
    return (v[k]==1);
}
void kiir(int k){
    for(int i=1;i<k;i++)
        cout<<v[i]<<"->";
    cout<<v[k]<<endl;
}
int main() {
    beolvas();
    int k=2;
    v[1]=1;
    bool vk, je;
    while(k!=1){
        do{
            vank(k,vk);
            if(vk) joelem(k,je);
        }while(vk && !je);
        if(vk && je)
            if(megoldas(k)) kiir(k);
            
            else {k++; v[k]=0;}
            else k--;
        
    }
    return 0;
}
