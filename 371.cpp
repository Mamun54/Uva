#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int i,j,a,n=0,p,s=0,num,temp;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i==0&&j==0)
        break;
        if(i>j)
        {
            temp=i;
            i=j;
            j=temp;
        }
        for(a=i;a<=j;a++)
        {
            p=a;
            n=0;
            do
           {
            n++;
            if(p%2==0)
            p=p/2;
            else
            p=(3*p)+1;
           }
           while(p!=1);
           if(n>s)
           {
               s=n;
               num=a;
           }
        }

printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,num,s);
n=0,s=0;
    }
    return 0;
}

