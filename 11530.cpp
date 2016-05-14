#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char ch[400];
    int i,j,p,t,result;
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++)
    {
        gets(ch);
        result=0;
        for(i=0;ch[i]!=NULL;i++)
        {
            if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'||ch[i]=='m'||ch[i]=='p'||
               ch[i]=='t'||ch[i]=='w'||ch[i]==' ')
               result=result+1;
            else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'||ch[i]=='n'||ch[i]=='q'||
               ch[i]=='u'||ch[i]=='x')
               result=result+2;
            else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'||ch[i]=='o'||ch[i]=='r'||
               ch[i]=='v'||ch[i]=='y')
               result=result+3;
            else if(ch[i]=='s'||ch[i]=='z')
               result=result+4;
        }
        printf("Case #%d: %d\n",j,result);
    }
    return 0;
}
