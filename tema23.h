#ifndef TEMA23_H_INCLUDED
#define TEMA23_H_INCLUDED
#include <iostream>
using namespace std;



int n, x[20];

void afisare(int k)
{
    int pare=0, impare=0;

    for(int i=1;i<=k;i++){
        if(x[i]%2==0){
            pare++;
        }
        else{
            impare++;
        }
    }

    if(pare==impare){
        for(int i=1;i<=k;i++){
            cout<<x[i]<<" ";
        }

        cout<<endl;
    }
}

void back(int k)
{
    for(int v=1;v<=n;v++){
        if(k==1 || v>x[k-1]){
            x[k]=v;

            afisare(k);

            back(k+1);
        }
    }
}

void combinari()
{
    cin>>n;
    back(1);

}


#endif // TEMA23_H_INCLUDED
