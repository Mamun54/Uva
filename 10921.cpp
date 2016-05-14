#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char ch[100];
    int len,i,m,n;
    while(gets(ch))
    {
        for(i=0;ch[i]!=NULL;i++)
        {
            if(ch[i]>='A'&&ch[i]<='C')
            printf("2");
            else if(ch[i]>='D'&&ch[i]<='F')
            printf("3");
            else if(ch[i]>='G'&&ch[i]<='I')
            printf("4");
            else if(ch[i]>='J'&&ch[i]<='L')
            printf("5");
            else if(ch[i]>='M'&&ch[i]<='O')
            printf("6");
            else if(ch[i]>='P'&&ch[i]<='S')
            printf("7");
            else if(ch[i]>='T'&&ch[i]<='V')
            printf("8");
            else if(ch[i]>='W'&&ch[i]<='Z')
            printf("9");
            else
            printf("%c",ch[i]);

        }
        printf("\n");
    }
}
