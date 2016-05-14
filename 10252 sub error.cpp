#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2;
    char ch[9000];
    while(1)
    {
    int count=0;
    cin>>str1>>str2;
    for(int i=0;str1[i]!=NULL;i++)
    {
        for(int j=0;str2[j]!=NULL;j++)
        {
            if(str1[i]==str2[j])
            {
                ch[count]=str1[i];
                count++;
                break;
            }
        }
    }
    sort(ch,ch+count);
    for(int k=0;k<count;k++)
    printf("%c",ch[k]);
    printf("\n");
}
return 0;
}
