#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
long long int prime[1000000]={0};
long long int word_prime[1000000]={0};
int sieve()
{
    long int i,j,r;
    r=sqrt(1000000);
    for(i=2;i<r;i++)
    {
        if(prime[i]==0)
        {
            for(j=i*2;j<=1000000;j=j+i)
            prime[j]=1;
        }
    }
    return 0;
}
int main()
{
    long int t,a,b,result,x,z,m,n,raj;
    scanf("%lld",&t);
    sieve();
    for(n=2;n<=1000000;n++)
    {
        if(prime[n]==0)
        {
            z=n;
            x=0;
            while(z)
            {
                x=x+z%10;
                z=z/10;
            }
            if(prime[x]==0)
            result++;
        }
        word_prime[n]=result;
    }
    for(m=0;m<t;m++)
    {
        scanf("%ld %ld",&a,&b);
        if(a%2!=0||a==2)
        a=a-1;
        raj=word_prime[b]-word_prime[a];

        printf("%ld\n",raj);
    }
    return 0;
}
