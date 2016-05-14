#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {

        int num,p,i,j,m=0;
        int ar[400],arr[400];
        for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            ar[i]=num;
        }
         if(n==1)
        {
            printf("Jolly\n");
            continue;
        }
        j=0;
        for(i=1;i<n;i++,j++)
        {
            if(ar[i]>ar[j])
            {
                p=ar[i]-ar[j];
                arr[m]=p;
                m++;
            }
            else if(ar[j]>ar[i])
            {
                p=ar[j]-ar[i];
                arr[m]=p;
                m++;
            }
            else
            {
                printf("Not jolly\n");
                break;
            }
        }
        m--;
        int count=0;
        j=0;
        for(i=1;i<=m;i++)
        {
            if(arr[j]-arr[i]==1)
            count++;
            else
            {
                printf("Not jolly\n");
                break;
            }
            j++;
        }
        if(count==m)
        printf("Jolly\n");
    }
    return 0;
}
