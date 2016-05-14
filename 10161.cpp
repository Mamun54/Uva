#include<iostream>
#include<cstdio>
using namespace std;
long long int p=5,x[20000],y[20000];
int main()
{
    int i,j,k,tem,num;
    for(i=3;i<6;i++)
    {
        for(j=1;j!=(i+1);j++)
        {
            x[p]=i;
            cout<<i<<" "<<j<<" ";
            y[p]=j;
            p++;
        }
        j--;
        for(k=j-1;k!=0;k++)
        {
            x[p]=k;
            y[p]=j;
            p++;
            cout<<k<<" "<<j<<" ";
        }
        tem=j;
        j=i;
        i=tem;
    }
    while(1)
    {
        scanf("%d",&num);
        printf("%d %d\n",x[num],y[num]);
    }

    return 0;
}
