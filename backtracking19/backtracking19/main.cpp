#include <iostream>
#include <fstream>

using namespace std;
char a[20][30], b[20][30];
int n,m ,p,t;
int v[40];
void beolvas(){
    ifstream f("be.in");
    f>>n>>m>>p>>t;
    f.get();
    for(int i=1;i<=n;i++){
        f.get(a[i],30);
        f.get();}
    for(int i=1;i<=m;i++){
        f.get(b[i],30);
        f.get();}
    f.close();
    for(int i=1;i<=n;i++)
        cout<<a[i]<<endl;
    for(int i=1;i<=m;i++)
        cout<<b[i]<<endl;
    
}
void vank(int k,bool &vk){
    v[k]++;
    vk=(v[k]<=n+m);
}
int osszeg(int k){
    int s=0;
    for(int i=1;i<=k;i++)
        if(v[i]<=n) s++;
    return s;
}
void joelem(int k,bool &je){
    
    je=(osszeg(k)<=t);

}
bool megoldas(int k){
    return (k==p);
}
void kiir(int k){
    for(int i=1;i<=k;i++)
        if(v[i]<=n)cout<<a[v[i]]<<"  ";
        else cout<<b[v[i]-n]<<"  ";
    cout<<endl;
}
int main() {
    beolvas();
    return 0;
}
