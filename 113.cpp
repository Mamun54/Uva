#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double m,n,p,k;
    while(scanf("%lf %lf",&n,&p)!=EOF)
    {
        k=pow(p,1/n);
        printf("%0.lf\n",k);
    }
    return 0;
}
