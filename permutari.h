#ifndef PERMUTARI_H_INCLUDED
#define PERMUTARI_H_INCLUDED
#include <iostream>
using namespace std;
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
    back(1);
}
/*
//x: poz  0 0 0 0

                 v[k]=v
back(1) v=1 k=1  0 1 0 0  valid(1) da k==n nu back(2)
back(2) v=1 k=2  0 1 1 0  valid(2) nu
        v=2 k=2  0 1 2 0  valid(2) da k==n nu back(3)
back(3) v=1 k=3  0 1 2 1  valid(3) nu
        v=2 k=3  0 1 2 2  valid(3) nu
        v=3 k=3  0 1 2 3  valid(3) da k==n da afisare
=================================================
revenim la back(2)
back(2) v=3 k=2  0 1 3 3  valid(2) da k==n nu back(3)[]
back(3) v=1 k=3  0 1 3 1  valid(3) nu
        v=2 k=3  0 1 3 2  valid(3) da k==n da afisare
=================================================
revenim la back(2)

v=4 4<=3 fals
====================================================
revenim la back(1)
back(1) v=2 k=1  0 2 3 2  valid(1) da k==n nu back(2)[]
back(2) v=1 k=2  0 2 1 2  valid(2) da k==n nu back(3)[]
back(3) v=1 k=3  0 2 1 1  valid(3) nu
        v=2 k=3  0 2 1 2  valid(3) nu
        v=3 k=3  0 2 1 3  valid(3) da k==n da afisare
====================================================
revenim la back(2)
back(2) v=2 k=2  0 2 2 3  valid(2) nu
        v=3 k=2  0 2 3 3  valid(2) da k==n nu back(3)[]
back(3) v=1 k=3  0 2 3 1  valid(3) da k==n da afisare
=====================================================
revenim la back(2)
back(2) v=4 k=2 4<=3 fals
=====================================================
revenim la back(1)
back(1) v=3 k=1  0 3 3 1  valid(1) da k==n nu back(2)[]
back(2) v=1 k=2  0 3 1 1  valid(2) da k==n nu back(3)[]
back(3) v=1 k=3  0 3 1 1  valid(2) nu
        v=2 k=3  0 3 1 2  valid(3) da k==n da afisare
=====================================================
revenim la back(2)
back(2) v=2 k=2  0 3 2 2  valid(2) da k==n nu back(3)[]
back(3) v=1 k=3  0 3 2 1  valid(3) da k==n da afisare
=====================================================
revenim la back(2)
back(2) v=3 k=2  0 3 3 2  valid(2) nu
        v=4 k=2  4<=3 fals
=====================================================
revenim la back(1)
back(1) v=4 k=1 4<=3 fals
=====================================================
programul sa sfarsit


*/
///ecran
/// 0 1 2 3
/// 0 1 3 2
/// 0 2 1 3
/// 0 2 3 1
/// 0 3 1 2
/// 0 3 2 1



#endif // PERMUTARI_H_INCLUDED
