#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    int min=0,n,p,i,sum=0,m=0;
    int ar[300];
    while(1)
    {
        m++;
        cin>>n;
        if(n==0)
        break;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            sum=sum+ar[i];
        }
        p=sum/n;
        for(i=0;i<n;i++)
        {
            if(ar[i]>p)
            {
                min=min+(ar[i]-p);
            }
        }
        cout<<"Set #"<<m<<"\nThe minimum number of moves is "<<min<<".\n"<<endl;
        min=0,sum=0;

    }
}
