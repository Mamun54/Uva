#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char ch[5000];
    int i,j,r,c,m,n,len,result,p,a,t;
    scanf("%d",&t);
    for(int test=1;test<=t;test++)
    {
    int ar[50]={0};
    scanf("%d %d %d %d",&r,&c,&m,&n);
    a=r*c;
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
       scanf("%c",&ch[i]);
       ar[ch[i]-65]=ar[ch[i]-65]+1;
    }
    getchar();
    }
    sort(ar,ar+49);
    reverse(&ar[0],&ar[49]);
    for(i=0;i<50;i++)
    {
        if(ar[i]>ar[i+1])
        {
            p=i;
            break;
        }
    }
    result=ar[0]*m*(p+1)+(a-ar[0]+1)*n;
    printf("Case %d: %d\n",test,result);
    }
    return 0;
}
