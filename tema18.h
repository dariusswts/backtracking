#ifndef TEMA18_H_INCLUDED
#define TEMA18_H_INCLUDED
#include <iostream>
using namespace std;


int n, x[20], p, k;

bool validCombinari(int poz)
{
    if(poz>1 && x[poz]<=x[poz-1])
    {
        return false;
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

    if(s%k==0)
    {
        for(int i=1;i<=p;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
}

void backCombinari(int poz)
{
    for(int v=1;v<=n;v++)
    {
        x[poz]=v;

        if(validCombinari(poz))
        {
            if(poz==p)
            {
                afisareCombinari();
            }
            else
            {
                backCombinari(poz+1);
            }
        }
    }
}

void combinari()
{
    cin>>n>>p>>k;
    backCombinari(1);
}

#endif // TEMA18_H_INCLUDED
