#ifndef PERMUTARI_H_INCLUDED
#define PERMUTARI_H_INCLUDED
#include <iostream>
using namespace std;


/// Algoritm Permutari
///Fiind data problema :Realiza permutari din multimeaM={1,2,3,...,n} iar n<21 astfel incat primul
///element din solutie sa fie impar iar ultimul sa fie par.
// P3 =>  a,b,c ;  a,c,b, c,a,b ,c,b,a b,c,a ,b,a,c

int s[100];
int n=4;
// 0 1 2
// a b c
// b  c a

void tipar(){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}
int valid(int k){
    //if(k==0&&s[k]%2==0) return 0;
    //if(k==n-1&&s[k]%2==1) return 0;

    for(int i=0;i<k;i++){
        if(s[k]==s[i]){
            return 0;
        }
    }
    return 1;
}

int solutie(int k){
    if(k==(n-1)){
        return 1;
    }else {
        return 0;
    }

}

void backtracking(int k){
    unsigned val;
    for(val=1;val<=n;val++){
        s[k]=val;
        if(valid(k))
            if(solutie(k)){

               tipar();
            }

            else {
                backtracking(k+1);
        }
    }
}

void solutie(){

    cout<<"n= ";
    cin>>n;
    backtracking(0);
}










#endif // PERMUTARI_H_INCLUDED
