#ifndef TEMA21_H_INCLUDED
#define TEMA21_H_INCLUDED
#include <iostream>
using namespace std;

int n, p, x[20];

bool prim(int s)
{
    if(s<2)
    {
        return false;
    }

    for(int i=2;i<=s/2;i++)
    {
        if(s%i==0)
        {
            return false;
        }
    }

    return true;
}

bool validCombinari(int k)
{
    if(k>1 && x[k]<=x[k-1])
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

    if(prim(s))
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
    cin>>n>>p;
    backCombinari(1);


}


#endif // TEMA21_H_INCLUDED
