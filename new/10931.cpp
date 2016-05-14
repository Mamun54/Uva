#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int n,i,j,a,count;
    int b[9999];
    while(1)
    {
    scanf("%ld",&n);
    if(n==0)
    break;
    count=0;
    for(i=0;;i++)
   {
    a=n%2;
    if(a==1)
    count++;
    n=n/2;
    b[i]=a;
    if(n==0)
    break;
    }
    printf("The parity of ");
    for(j=i;j!=-1;j--)
    printf("%d",b[j]);
    printf(" is %d (mod 2).\n",count);

   }
   return 0;
}
