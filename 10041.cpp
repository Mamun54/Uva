#include<iostream>
#include<cstdio>
#include<cmath>
#include<list>
using namespace std;
int main()
{
    list<int>v;
    list<int>::iterator it;
    int n,count;
    char s;
    scanf("%d",&n);
    scanf("%c",&s);
    char ch[6000];
    for(int i=0;i<n;i++)
    {
        gets(ch);
        count=0;
        for(int j=0;ch[j]!=NULL;)
        {
            if(ch[j]==' ')
            j++;
            else
            {
                v.push_back(ch[j]-48);
                count++;
                j++;
            }
        }
        v.sort();
        v.reverse();
        int result=0,tem;
        it=v.begin();
        for(int k=0;k<count-1;k++)
        {
            tem=*it;
            it++;
            result=tem-*it+result;
        }
        printf("%d\n",result);
        v.clear();
    }
    return 0;
}
