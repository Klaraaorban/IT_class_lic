#include <iostream>
using namespace std;
int v[11],n;
void vank(int k,bool &vk){
    v[k]++;
    vk=(v[k]<=n);
}
bool megoldas(int k){
    return(k==n);
}
void kiir( ){
    for(int i=1;i<=n;i++)
        cout<<"("<<i<<","<<v[i]<<")";
    cout<<endl;
}
void joelem(int k, bool &je){
    je=true;
    for(int i=1;i<k;i++)
        if(v[i]==v[k]) je=false;
    if((k-1>=1) && (v[k-1]==v[k]-2 || v[k-1]==v[k]+2)) je=false;
    if((k-2>=1) && (v[k-2]==v[k]-1 || v[k-2]==v[k]+1)) je=false;
}
int main() {
    cin>>n;
    int k=1;
    v[1]=0;
    bool vk,je;
    while(k!=0){
        do{
            vank(k,vk);
            if(vk) joelem(k,je);
        }while(vk && !je);
        if(vk && je)
            if(megoldas(k)) kiir( );
            else{k++; v[k]=0;}
            else k--;
    }
    return 0;
}
