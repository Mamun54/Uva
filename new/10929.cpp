#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char ch[2000];
    int i,n,p,result,len;
    while(1)
    {
        gets(ch);
        len=strlen(ch);
        if(len==1&&ch[0]=='0')
        break;
        if(len==1)
        {
            printf("%c is not a multiple of 11.\n",ch[0]);
            continue;
          }
        n=(ch[0]-48)*10+(ch[1]-48);
        for(i=2;;i++)
        {
            result=n%11;
            if(i>=len)
            break;
            n=(result*10)+ch[i]-48;
        }
        for(i=0;ch[i]!=NULL;i++)
        printf("%c",ch[i]);
        if(result==0)
        printf(" is a multiple of 11.\n");
        else
        printf(" is not a multiple of 11.\n");
    }
    return 0;
}
