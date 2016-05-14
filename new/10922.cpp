#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char ch[200];
    int i,m,n,result;
    while(1)
    {
        gets(ch);
        result=0,n=0;
        for(i=0;ch[i]!=NULL;i++)
        {
            m=ch[i]-48;
            result=m+result;
        }
        for(i=0;ch[i]!=NULL;i++)
        printf("%c",ch[i]);
        if(result%9!=0)
        {
            printf(" is not a multiple of 9.\n");
            continue;
        }
        else
        {
            while(1)
            {
                result=result/10;
                n++;
                if(result<10)
                {
                    n++;
                    break;
                }
            }
             printf(" is a multiple of 9 and has 9-degree %d.\n",n);
        }
    }
    return 0;
}
