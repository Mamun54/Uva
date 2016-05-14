#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
using namespace std;
long long int M,result;
long long int F(long long int N,long long int P)
{
    if(P==0) return 1;
    if(P%2==0)
    {
        long long int ret=F(N,P/2);
        return ((ret%M)*(ret%M))%M;
    }
    else return ((N%M)*(F(N,P-1)%M))%M;

}
int main()
{
    long long int N,P;
    while((scanf("%lld %lld %lld",&N,&P,&M))!=EOF)
    {
    result=F(N,P);
    printf("%lld\n",result);
    }
}
