#include<stdio.h>
int main()
   {
    int a,b=0,m=0,c,d,e,p,q,i,j,s=0,max=0;
    long int ar[90000],sr[90000];
   for(d=0;d!=EOF;d++)
   {
    scanf("%d %d",&p,&q);
    if(q<p)
    { e=p;
      p=q;
      q=e;
    }
    if(p==0&&q==0)
    break;
    for(i=p;i<=q;i++)
   {
    if(b==1)
    break;
    b=i;
    for(j=0;b>=0;j++)
   {
    if(b==1)
    break;

    c=b%2;
    if(c==0)
   {
    b=b/2;
    ar[j]=b;
    s++;
    continue;
    }
    else if(c==1)
  {
    b=3*b+1;
    ar[j]=b;
    s++;
    continue;
    }
    ar[j]='\0';
    }
    sr[m]=s;
    m++;
    s=0;
    b=0;
    }
    sr[m]=NULL;
    for(i=0;i<=q-p;i++)
   {
    if(sr[i]>max)
    max=sr[i];
    }
   for(a=0;a<=q-1;a++)
  { b=p-1;
   if(max==sr[a])
   {
    a++;
    b=b+a;
    break;
   }
   }
    printf("Between %d and %d, %d generates the longest sequence of %d values.\n",p,q,b,max);
   max=0;
   m=0;

   }
    return 0;
    }
