#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int ar[2000000];
int main()
{
    long int n,l,i;
    while(1)
    {
        scanf("%ld",&n);
        if(n==0)
        break;
        for(i=0;i<n;i++)
        scanf("%lld",&ar[i]);
        sort(ar,ar+n);
        for(i=0;i<n;i++)
        {
            printf("%lld",ar[i]);
            if (i<(n-1))
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
