#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int prime(long long int n)
{
    int root,i,p=0;
    root=sqrt(n);
    for(i=2;i<=root;i++)
    {
        if(n%i==0)
        {
            p++;
            break;
        }
    }
    if(p==0)
    return 1;
    else
    return 0;
}
void eprime(long long int po)
{
    int ar[900],p,i=0,j,a,result;
    long long int num=0,n;
    n=po;
    while(1)
    {
        p=n%10;
        n=n/10;
        ar[i]=p;
        i++;
        a=i;
        if(n<10)
        {
            ar[i]=n;
            break;
        }
    }
    p=1;
    for(j=0;j<=a;j++)
    {
        num=ar[i]*p+num;
        p=p*10;
        i--;
    }
    result=prime(num);
    if(result==0)
    printf("%lld is prime.\n",po);
    else
    printf("%lld is emirp.\n",po);
}
int main()
{
   long long int n;
   int result;
   while(scanf("%lld",&n)==1)
   {
       result=prime(n);
       if(result==0)
       printf("%lld is not prime.\n",n);
       else
       eprime(n);
   }
}
