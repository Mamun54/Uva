#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    int prime[2000];
    int item,c,po;
    int i,j,n,m=2;
    prime[0]=1;
    prime[1]=2;
    for(n=3;n<=1000;n++)
    {
        int p=0;
        int sq=sqrt(n);
        for(i=2;i<=sq;i++)
        {
            if(n%i==0)
            {
                p++;
                break;
            }
        }
        if(p==0)
        {
            prime[m]=n;
            m++;
        }

          }
          prime[m]=NULL;
          while((scanf("%d %d",&item,&c))!=EOF)
          {
          if(item>1000)
          return 0;
        for(m=0;prime[m]<=item;m++)
         ;
        if(m%2==0)
            po=c*2;
        else
            po=(c*2)-1;
        int need=(m-po)/2;
        printf("%d %d: ",item,c);
        if(po<m)
        {
          for(i=need;i<(m-need);i++)
          printf("%d ",prime[i]);
          printf("\n");
        }
        else
        {
            for(int k=0;prime[k]<=item;k++)
            printf("%d ",prime[k]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
