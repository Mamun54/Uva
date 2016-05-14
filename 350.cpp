#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long int L,Z,I,M,c=1,seed,result=1;
    while(1)
    {
        scanf("%ld %ld %ld %ld",&Z,&I,&M,&L);
        if(Z==0&&I==0&&M==0&&L==0)
        break;
        result=1;
        L=((Z*L)+I)%M;
        seed=L;
        L=((Z*L)+I)%M;
        while(L!=seed)
        {
            L=((Z*L)+I)%M;
            result++;

        }
        printf("Case %ld: %ld\n",c++,result);

    }
    return 0;
}
