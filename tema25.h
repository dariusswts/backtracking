#ifndef TEMA25_H_INCLUDED
#define TEMA25_H_INCLUDED
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
    if(k==1 && x[k]==1){
        return false;
    }

    return true;
}

void afisare()
{
    for(int i=1;i<=3;i++)
    {
        cout<<x[i]<<" ";
    }

    cout<<endl;
}

void back(int k)
{
    for(int v=1;v<=n;v++){
        x[k]=v;

        if(valid(k)){
            if(k==3){
                afisare();
            }
            else
            {
                back(k+1);
            }
        }
    }
}

void combinari()
{
    cin>>n;
    back(1);
}


#endif // TEMA25_H_INCLUDED
