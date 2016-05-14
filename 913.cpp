#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int num,n,i,j,result;
    while((scanf("%lld",&num))!=EOF)
    {
        n=num+1;
        i=n*(n+1)/2-(n/2)*(n/2+1);
        j=i*2;
        result=j*3-9;
        printf("%lld\n",result);
    }
    return 0;
}
