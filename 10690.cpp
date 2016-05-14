#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,ar[400],i,j,msum,nsum,sum,p,q,max,min;
    while(1)
    {
        msum=0;
        nsum=0;
        sum=0;
        scanf("%d %d",&m,&n);
        for(i=0;i<(m+n);i++)
        {
            scanf("%d",&ar[i]);
            sum=sum+ar[i];
        }
        sort(ar,ar+(m+n));
        if(m==n)
        {
            p=sum/2;
            q=sum-p;
            max=p*q;
        for(i=0;i<m;i++)
        msum=msum+ar[i];
        j=i;
        for(int k=j;k<(m+n);k++)
        nsum=nsum+ar[k];
        //cout<<"msum="<<msum<<"  nsum="<<nsum<<endl;
        min=msum*nsum;
        }
        if(n>m)
        {
            int tem=n;
            n=m;
            m=tem;
        }
        if(m>n)
        {
        for(i=0;i<m;i++)
        msum=msum+ar[i];
        j=i;
        for(int k=j;k<(m+n);k++)
        nsum=nsum+ar[k];
        max=msum*nsum;

        msum=0;
        nsum=0;
        for(i=0;i<n;i++)
        msum=msum+ar[i];
        j=i;
        for(int k=j;k<(m+n);k++)
        nsum=nsum+ar[k];
        min=msum*nsum;
        }
        printf("%d %d\n",max,min);
    }
    return 0;
}
