#include<iostream>
#include<cstdio>
using namespace std;
int ar[100000];
int main()
{
   while(1)
   {
       int n,i,j,count=0,p;
       scanf("%d",&n);
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
