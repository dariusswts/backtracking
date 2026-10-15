#ifndef PERMUTARI-8_H_INCLUDED
#define PERMUTARI-8_H_INCLUDED
#include <iostream>
using namespace std;
int n, x[20];

int valid8(int k){

    ///validarea supliemntara
    //if((abs(x[k]-x[k-1]))>2||(abs(x[k]-x[k+1]))>2){
    //    return false;
    //}
    if(k>1&&abs(x[k]-x[k-1])>2){
        return false;
    }
    for(int i=1;i<k;i++){
        if(x[i]==x[k]){
            return false;
        }
    }
    return true;
}

void afisare8(){
    for(int i=1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}


void back8(int k){
    for(int v=1;v<=n;v++){
        x[k]=v;
        if(valid8(k)){
            if(k==n){
                afisare8();
            }
            else{
                back8(k+1);
            }
        }
    }
}

void permutari8(){
    cin>>n;
    back8(1);
}






#endif // PERMUTARI-8_H_INCLUDED
