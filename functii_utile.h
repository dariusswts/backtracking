#ifndef FUNCTII_UTILE_H_INCLUDED
#define FUNCTII_UTILE_H_INCLUDED
#include <iostream>
using namespace std;

///verificare vector crescator
bool crescator(int v[],int dim,int poz){
    for(int i=1;i<=dim&&i<=poz;i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}

///verifica suma elem
int sumaEgala(int v[],int dim){
    int s=0;
    for(int i=1;i<=dim;i++){
        s=s+v[i];
    }
    return s;
}


#endif // FUNCTII_UTILE_H_INCLUDED
