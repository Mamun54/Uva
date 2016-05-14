#include<iostream>
#include<cstdio>
using namespace std;
long long int i,year,male,female,total,p,tem;
int main()
{
    while((scanf("%lld",&year)))
    {
        if(year==-1)
        break;
        male=1;
        female=0;
        p=1;
        if(year==0)
        printf("0 1\n");
        else
        for(i=0;i<year;i++)
        {
            female=female+p;
            total=male+female;
            if(i==year-1)
            printf("%lld %lld\n",male,total);
            male=total;

            tem=female;
            female=p;
            p=tem;
        }
    }
    return 0;
}
