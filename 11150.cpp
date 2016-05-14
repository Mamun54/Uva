#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,result;
    while(scanf("%lld",&a)!=EOF)
    {
        result=a;
        while(a>=2)
        {
            if(a==2)
            a=3;
            b=a%3;
            a=a/3;
            result=result+a;
            a=a+b;

        }
        printf("%lld\n",result);
    }
    return 0;
}
