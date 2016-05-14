#include<cstdio>
long long int N=1000000;
long long int prime[1000000];
void prime_number()
{
    long long int i,p,mul;
    for(i=2;i<=N;i++)
    {
        if(prime[i]==0)
        prime[i]=1;
        p=2;
        mul=p*i;
        while(mul<N)
        {
            prime[mul]=-1;
            p++;
            mul=p*i;
        }
    }
}
int main()
{
    long long int a,c,p,i;
    prime_number();
    while(1)
    {
        scanf("%lld",&a);
        c=0;
        if(a==0)
        break;
        p=a;i=2;
        while(1)
        {
           while(prime[i]!=1)
           i++;

           while(prime[p]!=1)
           p--;

           if(i+p>a)
            {
                p--;
                while(prime[p]!=1)
                {
                    p--;
                    if(p==0)
                    break;
                }

            }

           if(a==i+p)
            {
                printf("%lld:\n%lld+%lld\n",a,i,p);
                c=5;
                break;
            }
            if(i>=a)
            break;
            i++;
        }
         if(c!=5)
        printf("%lld:\nNO WAY!\n",a);

    }
    return 0;
}
