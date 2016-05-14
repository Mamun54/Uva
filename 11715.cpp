#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    float a,s,t,u,v,p;
    int i,j,n,m=0;
    while(1)
    {
        scanf("%d",&n);
        m++;
        if(n==0)
        break;
        else if(n==1)
        {
            scanf("%f %f %f",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+0.5*a*t*t;
            printf("Case %d: %0.3f %0.3f\n",m,s,a);
        }
        else if(n==2)
        {
            scanf("%f %f %f",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+0.5*a*t*t;
            printf("Case %d: %0.3f %0.3f\n",m,s,t);
        }
        else if(n==3)
        {
            scanf("%f %f %f",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %0.3f %0.3f\n",m,v,t);
        }
        else if(n==4)
        {
            scanf("%f %f %f",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %0.3f %0.3f\n",m,u,t);
        }
    }
    return 0;
}
