#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int p;
int main()
{
    int i,n,result;
    while(1)
    {
        scanf("%d",&n);
        p=0;
        for(i=0;;i++)
        {
            p=p+pow(10,i);
            if(p%n==0)
            {
                result=i+1;
                printf("%d\n",result);
                break;
            }
        }
    }
    return 0;
}
