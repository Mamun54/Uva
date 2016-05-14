#include<iostream>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
using namespace std;
long long int sum=0;
int main()
{
    long long int i,length,l,a,p;
    char ch[300];
    while(1)
    {
        gets(ch);
        length=strlen(ch);
        l=length;
        if(l==1&&ch[sum]==48)
        break;
        for(i=0;i<length;i++)
        {
            p=ch[i]-48;
            a=(p*(pow(2,l)-1));
            sum=a+sum;
            l--;
        }
        cout<<sum<<endl;
        sum=0;
    }
return 0;
}
