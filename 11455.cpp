#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int len,arr[10],t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<4;j++)
        scanf("%d",&arr[j]);

        sort(arr,arr+4);
        if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3])
        printf("square\n");
        else if(arr[0]==arr[1]&&arr[2]==arr[3])
        printf("rectangle\n");
        else if(arr[0]+arr[1]+arr[2]>arr[3])
        printf("quadrangle\n");
        else
        printf("banana\n");
    }
    return 0;
}
