#include<cstdio>
int main()
{
   long long int t,m,n,a,b,p;
    scanf("%lld",&t);
    while(t!=0)
    {
        t--;
        scanf("%lld %lld",&a,&b);
        if(a<b)
        {
            printf("impossible\n");
            continue;
        }
        else
        {
            p=a+b;
            if(p%2!=0)
            {
                printf("impossible\n");
                continue;
            }
            else
            {
               m=(a+b)/2;
               n=(a-b)/2;
               printf("%lld %lld\n",m,n);
            }
        }
    }
    return 0;
}
