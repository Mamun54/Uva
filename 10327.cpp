#include<iostream>
#include<cstdio>
#define MAX 100000000
using namespace std;
int ar[MAX];
int main()
{
    long long int n,i,j,tem,p,count;
   while(scanf("%lld",&n)!=EOF)
   {
       count=0;
       for(i=0;i<n;i++)
       scanf("%d",&ar[i]);
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
             if(ar[j]>ar[j+1])
             {
              p=j+1;
              if(p==n)
              break;
              count++;
              int tem;
              tem=ar[j];
              ar[j]=ar[p];
              ar[p]=tem;
             }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
}
}
