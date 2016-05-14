#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<algorithm>
using namespace std;
int prime(long long int n)
{
    if(n==2)
    return 1;
    if(n==1)
    return 0;
    int root,i,p=0;
    root=sqrt(n);
    for(i=2;i<=root;i++)
    {
        if(n%i==0)
        {
            p++;
            break;
        }
    }
    if(p==0)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b,t,p=0,count=0,m=0,len;
    char ch[400],s;
    scanf("%d",&t);
    scanf("%c",&s);
    for(int i=1;i<=t;i++)
    {
        gets(ch);
        len=strlen(ch);
        sort(ch,ch+len);
        puts(ch);
        printf("Case %d: ",i);
        while(1)
        {
        a=ch[p];
        while(a==ch[p])
        {
           count++;
           p++;
        }
        int result=prime(count);
        count=0;
        if(result==1)
        {
            m++;
            printf("%c",ch[p-1]);
        }
        if(p==len)
        break;
        }
        if(m==0)
        printf("empty");
        printf("\n");
        p=0,m=0;
    }
    return 0;
}
