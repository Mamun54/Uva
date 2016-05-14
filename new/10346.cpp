#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,result;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        result=0;
        while(n!=0)
        {
            result=result+n;
            n=n/m;
        }
        printf("%d\n",result);
    }
    return 0;
}
