#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,result,p;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        result=0;
        p=n;
       while(n>=m)
        {
            result=result+(n/m);
            n=(n%m)+(n/m);
        }
        cout<<result+p<<endl;
    }
    return 0;
}
