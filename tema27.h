#ifndef TEMA27_H_INCLUDED
#define TEMA27_H_INCLUDED
#include <iostream>
using namespace std;

/*
27. Codul unui seif are p cifre distincte, alese dintre cifrele 1, 2, …, n. Prima cifră a codului este impară, iar ultima este
pară. Se citesc n și p (1 ≤ p ≤ n ≤ 9). Afișați, în ordine crescătoare, toate codurile posibile, scriind fiecare cod pe
câte o linie, cu cifrele separate prin spațiu.
Date de intrare
5 3
Date de ieșire
1 2 4
1 3 2
1 3 4
1 4 2
1 5 2
1 5 4
3 1 2
3 1 4
3 2 4
3 4 2
3 5 2
3 5 4
5 1 2
5 1 4
5 2 4
5 3 2
5 3 4
5 4 2
*/
int x[100],n,k,p;

bool valid(int k){
    for(int i=1;i<k;i++){
        if(x[i]==x[k]){
            return false;
        }
    }
    if(k==1&&x[k]%2==0){
        return false;
    }

    if(k==p&&x[k]%2==1){
        return false;
    }

    return true;
}

void afisare(){
    for(int i=1;i<=p;i++){
        cout<<x[i]<<" ";
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
    cin>>n>>p;
    back(1);
}















#endif // TEMA27_H_INCLUDED
