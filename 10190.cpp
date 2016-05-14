#include<iostream>
#include<cstdio>
using namespace std;
long long int num,p,ar[100000000];
int main()
{
    int a,i,k,g;
    while(1)
    {
        scanf("%lld %lld",&num,&p);
        ar[0]=num;
        i=1;
        while(1)
        {
            a=num%p;
            if(a==0)
            {
                num=num/p;
                ar[i]=num;
                k=i;
                i++;
            }
            else
           {
            printf("Boring!\n");
            break;
           }
           if(num==1)
           {
               for(g=0;g<=k;g++)
               printf("%lld ",ar[g]);
               printf("\n");
               break;
           }
        }
    }
    return 0;
}
