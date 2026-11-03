#ifndef TEMA13_H_INCLUDED
#define TEMA13_H_INCLUDED
#include <iostream>
using namespace std;

int n, x[20], p, S;

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
    int s=0;

    for(int i=1;i<=p;i++)
    {
        s=s+x[i];
    }

    if(s==S)
    {
        for(int i=1;i<=p;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
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
    cin>>n>>p>>S;
    backCombinari(1);
}

#endif // TEMA13_H_INCLUDED
