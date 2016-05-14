#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int ar[99999999];
int main()
{
    long long int test,p,result;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&p);
        result=(sqrt(1+8*p)-1)/2;
        printf("%lld\n",result);
    }
    return 0;
}
