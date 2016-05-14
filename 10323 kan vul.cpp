#include<cstdio>
long long int F(int n)
{
    if(n==1)
    return 1 ;
    else
    return n*F(n-1);
}
int main()
{
    long long int n,result;
    while(scanf("%lld",&n)!=EOF)
    {
    if(n<8)
    printf("Underflow!\n");
    else if(n>13)
    printf("Overflow!\n");
    else
    {
        result=F(n);
        printf("%lld\n",result);
    }
    }
    return 0;
}
