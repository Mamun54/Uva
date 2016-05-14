#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char ch[6000];
    while(1)
    {
        gets(ch);
        int i,len;
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            ch[i]=ch[i]-7;
            printf("%c",ch[i]);
        }
        printf("\n");
    }
    return 0;
}
