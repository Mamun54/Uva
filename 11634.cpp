#include<cstdio>
int main()
{
   while(1)
{
   long int n,i,a,result=1,ar[10000]={0},p;
   scanf("%ld",&p);
   n=p;
   if(n==0)
   break;
   for(i=0;i<=1000;i++)
   {
       n=n*n;
       n=n/100;
       a=n/10000;
       n=n-a*10000;
       if(ar[n]==0&&p!=n)
       {
          result++;
          ar[n]=1;
       }
   }
   printf("%ld\n",result);
   }
   return 0;
}
