#include<iostream>
#include<cmath>
#include<cstdio>
#define PI 3.14159265
using namespace std;
int main()
{
    int d,t,u,v;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        float t1,t2,a,b,p;
        scanf("%d %d %d",&d,&v,&u);
        if(v>=u)
        {
            printf("can't determine\n");
            continue;
        }
        p=(float)v/u;
        b=(acos(-p)*180)/PI;
        t1=d/(u*sin(b*PI/180));
        t2=(float)d/u;
        a=t1-t2;
        printf("Case %d: %.3f\n",i,a);
    }
}
