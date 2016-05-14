#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int pr[100000],N=1000000;
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
int sum(int n)
{
    int a,b,c,result=0;
    while(1)
    {
        if(n<=9)
        {
            result=result+n;
            break;
        }
        a=n%10;
        result=result+a;
        n=n/10;
    }
    return result;
}
int main()
{
    int result,i,j,a,t2,t1,m=1,t,count;
    long long int n;
    pr[0]=2;
    for(n=3;n<N;n++)
    {
        result=prime(n);
        if(result==1)
        {
            a=sum(n);
            result=prime(a);
            if(result==1)
            {
                pr[m]=n;
                m++;
            }
        }
        n++;
    }
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
      count=0;
      scanf("%d %d",&t1,&t2);
      for(j=0;pr[j]<t1;j++)
      ;
      for(int k=j;pr[k]<t2;k++)
      count++;
      printf("%d\n",count);
    }
    return 0;
}
