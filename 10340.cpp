#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2;
    while(1)
    {
        cin>>str1>>str2;
        int p=0,m=0;
        int len=str1.length();
        for(int i=0;str1[i]!=NULL;i++)
        {
            for(int j=m;str2[j]!=NULL;j++)
            {
                m=j;
                if(str1[i]==str2[j])
                {
                    p++;
                    m++;
                    break;
                }
            }
        }
        if(len==p)
        printf("Yes\n");
        else
        printf("No\n");
    }
}
