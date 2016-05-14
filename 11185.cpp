#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,i,m;
    while(1)
    {
        int ar[4000]={0};
        scanf("%lld",&n);
        if(n<0)
        break;
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        for(i=0;n!=0;i++)
        {
            ar[i]=n%3;
            n=n/3;
        }
        for(m=i-1;m!=-1;m--)
        printf("%d",ar[m]);
        printf("\n");
    }
    return 0;
}
