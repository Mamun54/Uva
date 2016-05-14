#include<cstdio>
int main()
{
    int a,i,b,t,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        for(int k=a;k<=b;k++)
        {
            if(k%2==1)
            sum=sum+k;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
