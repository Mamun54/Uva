#include<cstdio>
int GCD(int a,int b)
{
    while(b)
    {
        a=a%b;
        b=b^a;
        a=a^b;
        b=b^a;
    }
    return a;
}
int main()
{
    int i,j,G,N;
   while(scanf("%d",&N)!=EOF)
   {
       G=0;
       if(N==0)
       break;
       for(i=1;i<N;i++)
       for(j=i+1;j<=N;j++)
       G+=GCD(i,j);
       printf("%d\n",G);
   }
    return 0;
}
