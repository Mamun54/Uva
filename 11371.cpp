#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    long int a,b,c,d;
    string n,m;
    while(cin>>n)
    {
        sort(n.begin(),n.end());
        m=n;
        if(m[0]=='0')
        {
            for(int i=1;i<n.size();i++)
            {
                if(m[i]!='0')
                {
                    swap(m[0],m[i]);
                    break;
                }
            }
        }
        reverse(n.begin(),n.end());
        a=atol(n.c_str());
        b=atol(m.c_str());
        c=a-b;
        d=c/9;
        printf("%ld - %ld = %ld = 9 * %ld\n",a,b,c,d);
    }
    return 0;
}
