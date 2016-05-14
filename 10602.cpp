#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,p,t,numbder_of_words,result,len,tem,a,g;
    char s[20][20];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        p=0,tem=0,a=0;
        scanf("%d",numbder_of_words);
        for(j=0;j<numbder_of_words;j++)
        {
            scanf("%s",s[j]);
            getchar();
        }
        for(j=0;j<numbder_of_words;j++)
        {
            len=strlen(s[j]);
            for(k=j+1;k<numbder_of_words;k++)
            {
                for(int m=0;m<strlen(s[k]);m++)
                {
                    if(s[j][m]!=s[k][m])
                    break;
                    p++;
                }
                result=strlen(s[k])-p+result;
             }

        }
        result=result+strlen(s[0]);
        cout<<"result= "<<result<<endl;
    }

}
