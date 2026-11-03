#ifndef TEMA26_H_INCLUDED
#define TEMA26_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;

/*
26. Comisia de evaluare
Dintre cei n profesori ai unei școli, numerotați de la 1 la n, se formează o comisie de p persoane. Profesorii cu
numerele a și b sunt certați și nu pot face parte împreună din comisie. Se citesc n, p, a și b (1 ≤ p ≤ n ≤ 9). Afișați, în
ordine lexicografică, toate comisiile posibile, câte una pe linie, cu numerele profesorilor în ordine crescătoare.
Date de intrare
5 3 1 2
Date de ieșire
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5
*/

struct Profesor{
     int nr;
     char nume[100];
};

Profesor profesori[100];

int x[100],n,p,k,a,b;

bool valid(int k){
    if(k>1&&x[k]<=x[k-1]){
        return false;
    }
    return true;


}

void afisare(){
    for(int i=1;i<=p;i++){
         int p=x[i];
         cout<<profesori[p].nume<<" ";
        // cout<<x[i]<<" ";
    }
    cout<<endl;
}

void back(int k){
    for(int v=1;v<=n;v++){
        x[k]=v;
        if(valid(k)){
            if(k==p){
                afisare();
            }
            else{
                back(k+1);
            }
        }
    }
}

void solutie(){

    Profesor a;
    a.nr=1;
    strcpy(a.nume,"Alex");

    Profesor h;
    h.nr=2;
    strcpy(h.nume,"Darius");

    Profesor b;
    b.nr=3;
    strcpy(b.nume,"Luca");

    Profesor y;
    y.nr=4;
    strcpy(y.nume,"Petru");

    profesori[1]=a;
    profesori[2]=h;
    profesori[3]=b;
    profesori[4]=y;



    cin>>n>>p;
    back(1);

}



























#endif // TEMA26_H_INCLUDED
