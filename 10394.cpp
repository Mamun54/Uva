#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define N 20000000
using namespace std;
bool prime[N];
long long int p[N];
void sieve ()
{
    memset(prime,true,N);
    prime[0]=prime[1]=false;
    for(int i=4;i<N;i+=2)
        prime[i]=false;
    for(int i=3;i*i<=N;i+=2)
    {
        if(prime[i])
        {
            for(int j=i*i;j<N;j+=2*i)
                prime[j]=false;
        }
    }
}
int main()
{
    long long int q=0,i,s,j,a,b;
    sieve();
    for(i=3,j=i+2;i<=N;j=j+2,i+=2)
    {
       if(prime[i]&&prime[j])
       p[q++]=i;
     }
    while(scanf("%d",&s)!=EOF)
    {
    a=p[s-1];
    b=p[s-1]+2;
    printf("(%lld, %lld)\n",a,b);
    }
    return 0;
}
