#include<iostream>
#include<cstdio>
#include<map>
#include<cmath>
using namespace std;
long long int N=20000000;
int prime(long long int n)
{
    int root,i,p=0;
    root=sqrt(n);
    for(i=2;i<=root;i++)
    {
        if(n%i==0)
        {
            p++;
            break;
        }
    }
    if(p==0)
    return 1;
    else
    return 0;
}
int main()
{
    long long int n,pt,i=1,s,a,b;
    int result;
    map<int,int>mymap;
    for(n=3;n<N;n++)
    {
        result=prime(n);
        if(result==1)
        {
            pt=n+2;
            result=prime(pt);
            if(result==1)
            {
                mymap[i]=n;
                i++;
            }
        }
        n++;
    }
    cout<<"max:"<<i<<endl;
    while(1)
    {
    scanf("%lld",&s);
    a=mymap.find(s)->second;
    b=a+2;
    printf("(%lld, %lld)\n",a,b);
    }
    return 0;
}
