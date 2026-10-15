#ifndef PERMUTARI-5_H_INCLUDED
#define PERMUTARI-5_H_INCLUDED
#include <iostream>
using namespace std;

int n, x[20];

bool valid(int k)
{
    for(int i=1;i<k;i++){
        if(x[i]==x[k]){
            return false;
        }
    }

    if(k>1 && abs(x[k]-x[k-1])==1){
        return false;
    }

    return true;
}

void afisare()
{
    for(int i=1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void back5(int k)
{
    for(int v=1;v<=n;v++){
        x[k]=v;

        if(valid(k)){
            if(k==n){
                afisare();
            }
            else{
                back5(k+1);
            }
        }
    }
}

void permutari5()
{
    cin>>n;
    back(1);
}


#endif // PERMUTARI-5_H_INCLUDED
