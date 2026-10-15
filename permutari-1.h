#ifndef PERMUTARI-1_H_INCLUDED
#define PERMUTARI-1_H_INCLUDED
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
    x[1]=n;
    back(2);
}





#endif // PERMUTARI-1_H_INCLUDED
