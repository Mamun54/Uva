#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char ch[300],s,c[200]={0};
    scanf("%c",&s);
    for(int i=0;i<t;i++)
    {
        gets(ch);
        int a=0,b=0;
        for(int j=0;ch[j]!=NULL;j++)
        {

            if(ch[j]=='('||ch[j]=='[')
               c[a++]=ch[j];
            if(ch[j]==')'||ch[j]==']')
               {
                    if((c[a-1]=='('&&ch[j]==')')||(c[a-1]=='['&&ch[j]==']'))
                        a=a-1;
                   else
                   {
                       b=1;
                       break;
                   }
               }
        }
        if(a==0&&b==0)
        printf("Yes\n");
        else
        printf("No\n");


    }
    return 0;
}
