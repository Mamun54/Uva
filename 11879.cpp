#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,i,l,sum;
    char st[7000];
    while(gets(st))
    {
        a=0;
        l=strlen(st);
        if(l==1&&st[0]=='0')
        break;
        for(i=0;i<l;i++)
        {
            sum=a*10+(st[i]-'0');
            a=sum%17;
        }
        if(a==0)
        printf("1\n");
        else
        printf("0\n");

    }
    return 0;
}
