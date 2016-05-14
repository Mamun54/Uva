#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int h1,h2,m1,m2,result,a,b,c;
    while(1)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0&&h2==0&&m1==0&&m2==0)
        break;
        if(m1>m2)
        {
            a=60-m1+m2;
            h1=h1+1;
        }
        else
        a=m2-m1;

        if(h1>h2)
        b=24-h1+h2;
        else
        b=h2-h1;
        b=b*60;

        result=a+b;
        cout<<result<<endl;
    }
}
