#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
 {
     char ch[30],s;
     int g,l,m,c=0,start=0,count=0;
     while(1)
     {
         cin>>g;
         scanf("%c",&s);
         if(g==0)
         break;
         gets(ch);
         l=strlen(ch);
         m=l/g;
         c=m+c;
         for(int i=c-1;;i--)
         {
             cout<<ch[i];
             count++;
             if(count==l)
             break;
             if(i==start)
             {
               start=start+m;
               c=m+c;
               i=c;
               continue;
             }

         }
         cout<<endl;
         c=0,start=0,count=0;
     }
     return 0;

 }
