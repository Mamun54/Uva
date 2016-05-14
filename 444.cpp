#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   char ch[6000];

   while(gets(ch))
{
       int b,c,d,i,j,k,a=0,count=0;
       int m,p=0;
       int ar[500],pr[500],prr[500];
       for(i=0;ch[i]!=NULL;i++)
       {
           if(ch[i]>='0'&&ch[i]<='9')
           {
               prr[i]=ch[i]-48;
               count++;
           }
           else
           {
               ar[i]=ch[i];
               if(ar[i]<100)
               {
                  b=ar[i]%10;
                  c=ar[i]/10;
                  pr[p]=c;
                  p++;
                  pr[p]=b;
                  p++;
                  //cout<<"c="<<c<<" b="<<b<<" p="<<p<<endl;
               }
               else
               {
                  b=ar[i]%10;
                  c=ar[i]/10;
                  d=c/10;
                  c=c%10;
                  pr[p]=d;
                  p++;
                  pr[p]=c;
                  p++;
                  pr[p]=b;
                  p++;
                  //cout<<b<<"    b="<<c<<d<<endl;;
               }

           }

       }
        pr[p]=NULL;

      // n=i-1;
       prr[i]=NULL;
       for(i=0;prr[i]!=NULL;i++)
        ;
       if(count>0)
      {
       for(m=i-1;m!=-1;)
       {
           j=m-1;
           k=j-1;
           a=0;
           a=prr[m]*10+prr[j];
           if(a>31)
           {
               printf("%c",a);
               m=m-2;
           }
           a=prr[m]*100+prr[j]*10+prr[k];
           if(a>99&&a<123)
           {
               printf("%c",a);
               m=m-3;
           }
           if(m==0)
           break;

       }
      }
      else
      {
          p--;
          for(i=p;i!=-1;i--)
          cout<<pr[i];
      }
      cout<<endl;
}
return 0;
   }
