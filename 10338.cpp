#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long int F(int n)
{
    if(n==1)
    return 1;
    else
    return n*F(n-1);
}
int main()
{
    long long int result,n;
    int t;
    char ch[900],s;
    scanf("%d",&t);
    scanf("%c",&s);
    for(int i=1;i<=t;i++)
    {
        gets(ch);
        n=strlen(ch);
        result=F(n)/2;
        printf("Data set %d: %lld\n",i,result);
    }
    return 0;
}
