#include<iostream>
#include<cstdio>
using namespace std;
long long int s,d,p;
int main()
{
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        p=0;
        while(p<d)
        p+=s++;
        printf("%lld\n",--s);
        }
return 0;
}
