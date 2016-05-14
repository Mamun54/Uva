#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    char ch[400],a[300],out[300],tem;
    int n,m,i,j,p,t;
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++)
    {
        gets(ch);
        n=0,m=0;
        for(i=0;ch[i]!=NULL;i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z')
            tem=ch[i];
            else
            {
                a[n++]=ch[i];
                if(ch[i+1]>='A'&&ch[i+1]<='Z'||ch[i+1]==NULL)
                {
                    a[n]=NULL;
                    p=atoi(a);
                    for(int k=0;k<p;k++)
                    out[m++]=tem;
                    n=0;
                }

            }
        }
        out[m]=NULL;
        printf("Case %d: ",j);
        puts(out);
    }
    return 0;
}
