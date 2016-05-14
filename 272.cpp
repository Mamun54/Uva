#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char ch[60000];
    int i,j=0,a;
    while(gets(ch))
    {
        for(i=0;ch[i]!=NULL;i++)
        {
            if(ch[i]=='"')
            {
                j++;
                if(j%2!=0)
                cout<<"``";
                else
                cout<<"''";
                }
                else
                cout<<ch[i];

        }
        cout<<endl;
    }

}
