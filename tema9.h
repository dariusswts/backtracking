#ifndef TEMA9_H_INCLUDED
#define TEMA9_H_INCLUDED
#include <iostream>
using namespace std;


int n, x[20], p;

bool validCombinari(int k)
{
    for(int i=1;i<k;i++)
    {
        if(x[i]==x[k])
        {
            return false;
        }
    }

    return true;
}

void afisareCombinari()
{
    for(int i=1;i<=p;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void backCombinari(int k)
{
    for(int v=1;v<=n;v++)
    {
        x[k]=v;

        if(validCombinari(k))
        {
            if(k==p)
            {
                afisareCombinari();
            }
            else
            {
                backCombinari(k+1);
            }
        }
    }
}

void combinari()
{
    cin>>n>>p;
    backCombinari(1);
}

#endif // TEMA9_H_INCLUDED
