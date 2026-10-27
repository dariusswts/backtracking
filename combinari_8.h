
#ifndef COMBINARI_8_H_INCLUDED
#define COMBINARI_8_H_INCLUDED

#include <iostream>
using namespace std;

int n, x[20];
int p;
int m[100][100]{};
int l=0;


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
         m[l][i]=x[i];
    }
    l++;
    cout<<endl;
}

void afisareMatirici(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
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
   n=3;
   for( p=1;p<=n;p++){
        backCombinari(1);
   }

}


#endif // COMBINARI_8_H_INCLUDED
