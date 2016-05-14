#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i,a,p,result,e,f,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&e,&f,&c);
        a=e+f;
        result=0;
        while(a>=c)
        {
            p=a%c;
            a=a/c;
            result=result+a;
            a=a+p;
        }
        printf("%d\n",result);
    }
    return 0;
}
