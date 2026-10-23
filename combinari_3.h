#ifndef COMBINARI_3_H_INCLUDED
#define COMBINARI_3_H_INCLUDED
#include <iostream>
using namespace std;

int n, x[20];
int p;

bool validCombinari(int k)
{
    if(k > 1 && x[k] <= x[k-1])
    {
        return false;
    }

    return true;
}

void afisareCombinari()
{
    for(int i=1;i<=p;i++)
    {
        cout <<x[i]<<" ";
    }
    cout<<endl;
}

void backCombinari(int k)
{
    for(int v =1;v<=n;v++)
    {
        x[k]=v;

        if(validCombinari(k))
        {
            if(k == p)
            {
                int s=0;

                for(int i=1;i<=p;i++)
                {
                    s=s+x[i];
                }

                if(s%2==0)
                {
                    afisareCombinari();
                }
            }
            else
            {
                backCombinari(k + 1);
            }
        }
    }
}

void combinari()
{
    cin >> n >> p;
    backCombinari(1);
    ///consola 5 2
}



#endif // COMBINARI_3_H_INCLUDED
