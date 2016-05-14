#include<iostream>
#include<cstdio>
using namespace std;
long long int pos,tem;
int main()
{
    int t,i,a,c=1;
    while((scanf("%d",&t))!=EOF)
    {
        pos=0,tem=1;
        for(i=0;i<t;i++)
        {
            scanf("%d",&a);
            tem=a*tem;
            if(tem>0&&pos<tem)
            pos=tem;
        }
        printf("Case #%d: The maximum product is %lld.\n\n",c++,pos);
    }
    return 0;
}
