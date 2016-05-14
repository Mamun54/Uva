#include<cstdio>
#include<cmath>
int main()
{
   double a,b,c,p,d;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        d=(a+b+c)/2.0;
        p=(4.0/3.0)*(sqrt(d*(d-a)*(d-b)*(d-c)));
        if(p>0)
        printf("%.3lf\n",p);
        else
        printf("-1.000\n");
    }
    }
