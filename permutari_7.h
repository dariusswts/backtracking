#ifndef PERMUTARI-7_H_INCLUDED
#define PERMUTARI-7_H_INCLUDED
#include <iostream>
using namespace std;
int n, x[20];

bool valid(int k)
{
    for(int i=1;i<k ;i++){
        if(x[i]==x[k]){
            return false;
        }
    }

    if(x[k]==1||x[k]==n){
        for(int i=1;i<k;i++){
            if(x[k]==1&&)
        }
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

void back(int k)
{
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

void permutari()
{
    cin>>n;
    back(1);
}

#endif // PERMUTARI-7_H_INCLUDED
