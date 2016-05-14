#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long long int year;
    while(scanf("%lld",&year)!=EOF)
    {
        if(year%4==0)
        {
            printf("This is leap year.\n");
            if(year%55==0)
            printf("This is Bulukulu festival year.\n");
            }
        if(year%15==0)
            printf("This is huluculu festival year.\n");
       if(year%4!=0&&year%15!=0)
       printf("This is an ordinary year.\n");
       printf("\n");
    }
    return 0;
}
