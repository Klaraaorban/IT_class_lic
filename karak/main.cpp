#include <iostream>
#include <cstring>
using namespace std;
int v[20],n;
char a[20];
void kiir(){
for(int i=1;i<=n;i++) cout<<a[v[i]];
cout<<endl;
}
bool megoldas(int k){
return(k==n);
}
void vank(int k,bool &vk){
v[k]++;
vk=(v[k]<n);
}
void joelem(int k, bool &je){
je=true;
for(int i=1;i<k;i++){
    if(v[i]==v[k]) je=false;
}
}
int main()
{
    int k=1;
    v[1]=-1;
    cin.get(a,20);
    n=strlen(a);
    bool vk,je;
    while(k!=0){
        do{
            vank(k,vk);
            if(vk) joelem(k,je);
        }while(vk && !je);
        if(vk && je)
            if(megoldas(k)) kiir();
        else{k++; v[k]=-1;}
        else k--;
    }
    return 0;
}
