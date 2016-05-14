#include<iostream>
#include<cctype>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
   int h,m;
   char ch;
   float angle;
   while((scanf("%d%c%d",&h,&ch,&m)))
   {
       if(h==0&&m==0)
       break;
       angle=float(abs((60*h-11*m)*.5));
       angle=min(angle,360-angle);
       printf("%.3f\n",angle);
   }
   return 0;

}
