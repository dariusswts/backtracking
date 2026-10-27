#ifndef COMBINARI_7_H_INCLUDED
#define COMBINARI_7_H_INCLUDED
#include <iostream>
#include <iostream>
#include "functii_utile.h"
using namespace std;

int n=6, x[20];
int p=3, S=10;





bool valid7(int k){

      if(k>1 && x[k]<=x[k-1]){
          return false;
      }
    return true;
}


void afisare7(){
    for(int i=1;i<=p;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void backCombinari7(int k){
    for(int v=1;v<=n;v++){
        x[k]=v;
          if(valid7(k)){
              if(k==p&&sumaEgala(x,p)==S){
                  afisare7();
              }else{
                  backCombinari7(k+1);
              }
          }

    }
}


void combinari7(){

    backCombinari7(1);
}


#endif // COMBINARI_7_H_INCLUDED
