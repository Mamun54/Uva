#include<iostream>
using namespace std;
int main()
{
    int n,i,a,t;
    float p;

    cin>>t;
    if(1<=t<=100)
    {
        for(i=0;i<t;i++)
        {
          cin>>n;
          if(-1000<=n&&n<=1000)
          {
             p=float((((((n*567)/9)+7492)*235)/47)-498);
             a=p/10;
             a=a%10;
             if(a<0)
             a=-a;
             cout<<a<<endl;
           }
        }
    }

    return 0;
}
