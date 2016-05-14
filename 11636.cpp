#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    float p;
    int n,m=1;
    while((scanf("%d",&n))&&n)
    {
        if(n<0)
        break;
        p=log10(n)/log10(2);
        printf("Case %d: %.0f\n",m++,ceil(p));
    }
    return 0;
}
