#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int p,i,j;
    char ch[9000];
    while(1)
    {
        gets(ch);
        int len=strlen(ch);
        j=len-1;
        p=0;
        if(ch[0]=='D'&&ch[1]=='O'&&ch[2]=='N'&&ch[3]=='E'&&ch[4]==NULL)
        break;
        for(i=0;i<=(len/2);i++,j--)
        {
            while(ch[i]=='.'||ch[i]==','||ch[i]=='?'||ch[i]=='!'||ch[i]==' ')
            i++;
            while(ch[j]=='.'||ch[j]==','||ch[j]=='?'||ch[j]=='!'||ch[j]==' ')
            j--;

            if(ch[i]>='A'&&ch[i]<='Z')
            ch[i]=ch[i]+32;
            if(ch[j]>='A'&&ch[j]<='Z')
            ch[j]=ch[j]+32;

            if(ch[i]!=ch[j])
            {
                printf("Uh oh..\n");
                //cout<<"ch[i]="<<ch[i]<<"  ch[j]="<<ch[j]<<endl;
                p=5;
                break;
            }
        }
        if(p!=5)
        printf("You won't be eaten!\n");
    }
    return 0;
}
