#ifndef COMBINARI_H_INCLUDED
#define COMBINARI_H_INCLUDED
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



///parcurgere

///n=4 p=2
/*
back()  v=1  v<=n     x[k]==v     valid   k==p

back(1) v=1   da      0 1 0 0       da    nu   back(2)[]
back(2) v=1   da        1 1         nu    -----------------
        v=2   da        1 2         da    da  afisare
        v=3   da        1 3         da    da  afisare
        v=4   da        1 4         da    da  afisare
=================================================
revenim la back 1
back(1) v=2   da      0 2 4 0       da    nu back(2)[]
back(2) v=1   da      0 2 1 0       nu
        v=2   da      0 2 2 0       nu
        v=3   da      0 2 3 0       da    da afisare
        v=4   da      0 2 4 0       da    da afisare
=================================================
revenim la back 1
back(1) v=3   da      0 3 4 0       da    nu back(2)[]
back(2) v=1   da      0 3 1 0       nu
        v=2   da      0 3 2 0       nu
        v=3   da      0 3 3 0       nu
        v=4   da      0 3 4 0       da    da afisare
=================================================
*/
///raspuns: 1 2
///         1 3
///         1 4
///         2 3
///         2 4
///         3 4














#endif // COMBINARI_H_INCLUDED
