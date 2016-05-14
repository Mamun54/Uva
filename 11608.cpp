#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[20],b[20],m=1,t,i,j,k,sum,ready_problem;
    while(scanf("%d",&ready_problem))
    {
        sum=ready_problem;
        if(a[0]<0)
        break;

        for(i=0;i<12;i++)
        scanf("%d",&a[i]);

        for(j=0;j<12;j++)
        scanf("%d",&b[j]);

        printf("Case %d:\n",m++);

        for(k=0;k<12;k++)
        {
            if(b[k]<=sum)
            {
                printf("No problem! :D\n");
                sum=b[k];
            }
            else
            printf("No problem. :(\n");
            sum=sum+a[k];
        }
    }
    return 0;
}
