#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int prime(long long int n)
{
    if(n==1||n==0)
    return 0;
    if(n==2)
    return 1;
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
    char ch[600];
    int i,n,result;
    while(gets(ch))
    {
        result=0;
        for(i=0;ch[i]!=NULL;i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
            result=result+ch[i]-96;
            else if(ch[i]>=65&&ch[i]<=90)
            result=result+ch[i]-38;
        }
        n=prime(result);
        if(n==1)
        printf("It is a prime word.\n");
        else
        printf("It is not a prime word.\n");
    }
    return 0;
}
