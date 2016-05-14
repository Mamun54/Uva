#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n<20)
    {
        long long int i,a,b,c;
        for(i=1;i<=n;i++)
        {
            cin>>a>>b>>c;
            if(a+b<c||a+c<b||c+b<a)
            cout<<"Case "<<i<<": Invalid\n";
            else
            {
            if(a==b&&a==c)
            cout<<"Case "<<i<<": Equilateral\n";

            else if(a==b||b==c||a==c)
            cout<<"Case "<<i<<": Isosceles\n";

            else if(a!=b&&b!=c)
            cout<<"Case "<<i<<": Scalene\n";

            }
        }
    }
    return 0;
}
