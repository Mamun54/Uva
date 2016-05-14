#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    long long int b,a,l,count=0;
    int p=0;
    while(1)
    {
        p++;
        scanf("%lld %lld",&b,&l);
        if(b<0&&l<0)
        break;
        a=b;
        while(1)
        {
            if(a==1)
            {
                count++;
                break;
            }
            if(a<=l)
           {
               if(a%2==0)
                   a=a/2;
               else
                   a=3*a+1;
                   ++count;
            }
            else
            break;
        }
printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",p,b,l,count);
count=0;
}
return 0;
}
