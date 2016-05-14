#include<stdio.h>
int main()
   {
    long int a=0,b,c=0,p,m=0,i,j,k;
    int ar[7000];
    for(i=2;i>1&&i<100;i++)
   {
    scanf("%ld",&p);
    if(p==0)
    break;
    for(j=2;j<=p;j++)
   {
    b=p%j;
    if(b==0)
   {
       b=p/j;
       ar[a]=b;
       a++;
       }
     }
    ar[a]=NULL;
    for(k=0;ar[k]!=NULL;k++)
   {
    c=c+ar[k];
    }
    if(m==0)
    printf("PERFECTION OUTPUT\n");
    if(c==p)
    printf("%5ld  PERFECT\n",p);
    if(c<p)
    printf("%5ld  DEFICIENT\n",p);
    if(c>p)
    printf("%5ld  ABUNDANT\n",p);
    a=0;
    c=0;
    m++;
    }
    printf("END OF OUTPUT\n");

    return 0;

    }
