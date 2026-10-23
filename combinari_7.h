#ifndef COMBINARI_7_H_INCLUDED
#define COMBINARI_7_H_INCLUDED
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int n, x[20];
int p;

bool validCombinari(int k)
{
    if(k>1 && x[k]<=x[k-1]){
        return false;
    }
    return true;
}

void afisareCombinari()
{
    for(int i=1;i<=p;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void backCombinari(int k)
{
    for(int v=1;v<=n;v++){
        x[k]=v;
        if(validCombinari(k)){
            if(k==p){
                afisareCombinari();
            }
            else{
                backCombinari(k+1);
            }
        }
    }
}

void combinari()
{
    cin>>n>>p;
    backCombinari(1);
}



#endif // COMBINARI_7_H_INCLUDED
