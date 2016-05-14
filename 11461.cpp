#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int ar[100000]={0};
int main()
{
    long int n,m,i,result=0,p=0,a,b,x,d;
    float y,z;
    for(i=1;p<=100000;i++)
    {
        p=i*i;
        ar[p]=1;
    }
    for(i=1;i<=100000;i++)
    {
        result=result+ar[i];
        ar[i]=result;
    }
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
        break;
        x=sqrt(a);
        y=sqrt(a);
        d=sqrt(b);
        z=sqrt(b);
        if(x==y||d==z)
        a=a-1;
        result=ar[b]-ar[a];
        printf("%ld\n",result);
    }
    return 0;
}
