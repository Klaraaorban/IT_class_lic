#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char a[10][10];
int n;
int v[8];
void beolvas(){
ifstream f("jelszo.in");
f>>n;
int i,j;
char c;
while(f>>i>>j>>c){
    a[i][j]=c;
    a[j][i]=c;
}
f.close();
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
       if(a[i][j]!=0) cout<<a[i][j]<<"  ";
       else cout<<" * ";
    cout<<endl;
}
}
void vank(int k, bool &vk){
v[k]++;
vk=(v[k]<=n);
}
bool megoldas(int k){
return(k==7);
}
void joelem(int k, bool &je){
je=true;
if(k>1 && a[v[k-1]][v[k]]==0 ) je=false;
if(k>1){
    char c=a[v[k-1]][v[k]];
    int s=0;
    for(int i=1;i<k;i++) if(a[v[i]][v[i+1]]==c) s++;
    if(s>2) je=false;
}
}
void kiir(int k){
for(int i=1;i<k;i++) cout<<a[v[i]][v[i+1]];
cout<<"  ";
}
int main()
{
    beolvas();
    int k=1;
    v[1]=0;
    bool vk,je;
    while(k!=0){
        do{
            vank(k,vk);
            if(vk) joelem(k,je);
        }while(vk && !je);
        if(vk && je)
            if(megoldas(k)) kiir(k);
        else{k++;v[k]=0;}
        else k--;
    }
    return 0;
}
