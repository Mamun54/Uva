#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    string str;
    int length,n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        getline(cin,str);
        length=str.length();
        if(str=="1"||str=="4"||str=="78")
        printf("+\n");
        else if(length>=2&&(str[length-1]=='5')&&(str[length-2]=='3'))
        printf("-\n");
        else if(length>=2&&(str[length-1]=='4')&&str[0]=='9')
        printf("*\n");
        else if(length>=3&&(str[0]=='1')&&str[1]=='9'&&str[2]=='0')
        printf("?\n");

    }

    return 0;
}
