#ifndef TEMA3_H_INCLUDED
#define TEMA3_H_INCLUDED
#include <iostream>
using namespace std;

/*
3. 1 și n alăturate
Se citește un număr natural n (2 ≤ n ≤ 9). Afișați, în ordine lexicografică, toate permutările mulțimii {1, 2, …, n} în
care numerele 1 și n sunt vecine (în oricare ordine), câte una pe linie.
Date de intrare
4
Date de ieșire
1 4 2 3
1 4 3 2
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
4 1 2 3
4 1 3 2
*/

int n,k,x[100];

void afisare(){
    for(int i=1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}


bool valid(int k){
    for(int i=1;i<k;i++){
        if(x[i]==x[k]){
            return false;
        }
    }
    //validari
    if(k==n){
        for(int i=1;i<=n;i++){
            if((x[i]==1 && x[i+1]==n)||(x[i]==n&&x[i+1]==1)){
                return true;
            }
        }
        return false;
    }



   return true;
}

void back(int k){
    for(int v=1;v<=n;v++){
        x[k]=v;
        if(valid(k)){
          if(k==n){
              afisare();
          }
          else{
              back(k+1);
          }
        }
    }
}

void permutari(){
    cin>>n;
    back(1);
}













#endif // TEMA3_H_INCLUDED
