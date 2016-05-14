#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,p,m,i,j;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        break;
        p=0;
        m=sqrt(n);
        for(i=2;i<=m;i++)
        {
            for(j=1;j<i;j++)
            {
                if((i*i*i)-(j*j*j)==n)
                {
                    printf("%d %d\n",i,j);
                    p=1;
                    break;
                }
            }
            if(p==1)
            break;
        }
        if(p==0)
        printf("No solution\n");
    }
    return 0;
}
