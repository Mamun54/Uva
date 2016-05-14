#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long int n,i,count;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        count=1;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            count++;
        }
        if(count%2==0)
        printf("no\n");
        else
        printf("yes\n");
    }
    return 0;
}
