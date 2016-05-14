#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,s,area,result;
    while((scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3))!=EOF)
    {
        a=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        b=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
        c=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        result=(a*b*c*3.141592653589793)/(2.0*area);
        printf("%0.2lf\n",result);
    }
    return 0;
}
