#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,b=1,n,q,ar[600],arr[60];
    while(1)
    {
    int re[60]={0};
    scanf("%d %d",&n,&q);
    if(n==0&&q==0)
    break;
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    sort(ar,ar+i);
    for(j=0;j<q;j++)
    scanf("%d",&arr[j]);
    for(j=0;j<q;j++)

    {
        for(i=0;i<n;i++)
       {
           if(arr[j]==ar[i])
          {
            re[j]=i+1;
            break;
            }
       }
    }
    printf("CASE# %d:\n",b);
    b++;
    for(i=0;i<q;i++)
    {
        if(re[i]>0)
        printf("%d found at %d\n",arr[i],re[i]);
        else
        printf("%d not found\n",arr[i]);

    }
    }
    return 0;
}
