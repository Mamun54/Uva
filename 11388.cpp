#include<cstdio>
int main()
{
    long long int a,b,t;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(b%a==0)
        printf("%lld %lld\n",a,b);
        else
        printf("-1\n");
    }
    return 0;
}
