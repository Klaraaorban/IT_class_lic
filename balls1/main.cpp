#include <iostream>
#include <fstream>
using namespace std;
int a[10][10];
int n,x;
struct tabla{int oszlop;int lepes;} v[10];
int hova;
void beolvas()
{
    ifstream f("golyo.in");
    f>>n>>x;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            f>>a[i][j];
}
void vank(int k, bool &vk)
{
    v[k].lepes++;
    vk=(v[k].lepes<=3);
}
bool megoldas(int k)
{
    return(k==n-1);
}
void joelem(int k, bool &je)
{
    switch(v[k].lepes)
    {
    case 1:
    {
        hova=v[k].oszlop-1;
        break;
    }
    case 2:
    {
        hova=v[k].oszlop;
        break;
    }
    case 3:
    {
        hova=v[k].oszlop+1;
        break;
    }
    }
    je=true;
    if(hova<1 || hova>n) je=false;
    if(a[k+1][hova]==1) je=false;
}
void init(int k)
{
    v[k].oszlop=hova;
    v[k].lepes=0;
}
void kiir(int k)
{
    for(int i=1; i<k; i++)
        cout<<v[i].oszlop<<"  ";
}
int main()
{
    beolvas();
    int k=1;
    v[1].oszlop=x;
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
            if(megoldas(k)) kiir(k);
            else
            {
                k++;
                init(k);
            }
        else k--;
    }
    return 0;
}
