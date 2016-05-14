#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i=0,m,n,p,ar[1000];
    while(scanf("%d",&ar[i++])!=EOF)
    {
        sort(ar,ar+i);
        if(i%2!=0)
        {
            m=i/2;
            printf("%d\n",ar[m]);
        }
        else
        {
            n=i/2;
            printf("%d\n",((ar[n]+ar[n-1])/2));
        }
    }
    return 0;
}
