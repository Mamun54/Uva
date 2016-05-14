#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,i,j,a,p,sum,m,ar[100];
    char N[4000],g;
    scanf("%d",&t);
    getchar();
    for(j=0;j<t;j++)
    {
        gets(N);
        int len1=strlen(N);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        scanf("%d",&ar[i]);
        getchar();

        for(i=0;i<m;i++)
        {
           a=0;
           for(int k=0;k<len1;k++)
          {
            sum=a*10+(N[k]-'0');
            a=sum%ar[i];
           }
        if(a!=0)
        {
            printf("%s - Simple.\n",N);
            break;
        }
        }
    if(a==0)
    printf("%s - Wonderful.\n",N);
    }
    return 0;
}
