#ifndef PERMUTARI-3_H_INCLUDED
#define PERMUTARI-3_H_INCLUDED
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

    if(k%2==0 && x[k]%2!=0){
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

void back3(int k)
{
    for(int v=1;v<=n;v++){
        x[k]=v;

        if(valid(k)){
            if(k==n){
                afisare();
            }
            else{
                back3(k+1);
            }
        }
    }
}

void permutari3()
{
    cin>>n;
    back3(1);
}



#endif // PERMUTARI-3_H_INCLUDED
