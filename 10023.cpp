#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int n,x,y;
    scanf("%lld",&n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&y);
        x=sqrt(y);
        printf("%lld\n",x);
        if(i<n)
        printf("\n");
        else
        break;
    }
    return 0;
}

