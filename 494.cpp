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
        int i,len=0,result=0;
        for(i=0;ch[i]!=NULL;i++)
        {
            if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
            {
                if(len==0)
                {
                    result++;
                    len=1;
                }
            }
                else
                len=0;
            }
            printf("%d\n",result);
        }
        return 0;
    }
