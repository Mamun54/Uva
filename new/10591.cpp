#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int sum(int n)
{
    int a,result=0;
    while(1)
    {
        if(n<=9)
        {
            result=result+(n*n);
            break;
        }
        a=n%10;
        result=result+(a*a);
        n=n/10;
    }
   // cout<<result<<" ";
    return result;
}
int main()
{
    int t,i,j=1;
    long long int n,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        p=n;
        while(1)
        {
            p=sum(p);
            if(p==1)
            {
                printf("Case #%d: %lld is a Happy number.\n",j,n);
                j++;
                break;
            }
            else if(p<10)
            {
                printf("Case #%d: %lld is an Unhappy number.\n",j,n);
                j++;
                break;
            }
        }
    }
    return 0;
}
