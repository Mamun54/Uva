#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char ch[300];
    while(gets(ch))
    {

        int i,j,p=0,q=0;
        for(i=0;ch[i]!=NULL;i++)
        {
            cout<<ch[i];
        }
        j=i-1;
        for(i=0;i<(j+2)/2;i++)
        {
            if(ch[i]==ch[j])
             ;
            else
            p++;

            if((ch[i]=='2'&&ch[j]=='S')||(ch[i]=='S'&&ch[j]=='2')||
               (ch[i]=='3'&&ch[j]=='E')||(ch[i]=='E'&&ch[j]=='3')||
               (ch[i]=='5'&&ch[j]=='Z')||(ch[i]=='Z'&&ch[j]=='5')||
               (ch[i]=='J'&&ch[j]=='L')||(ch[i]=='L'&&ch[j]=='J')||
               (ch[i]=='8'&&ch[j]=='8')||(ch[i]=='A'&&ch[j]=='A')||
               (ch[i]=='H'&&ch[j]=='H')||(ch[i]=='I'&&ch[j]=='I')||
               (ch[i]=='T'&&ch[j]=='T')||(ch[i]=='O'&&ch[j]=='O')||
               (ch[i]=='U'&&ch[j]=='U')||(ch[i]=='Y'&&ch[j]=='Y')||
               (ch[i]=='V'&&ch[j]=='V')||(ch[i]=='X'&&ch[j]=='X')||
               (ch[i]=='M'&&ch[j]=='M'))
               ;
               else
               q++;

            j--;
        }
        if(p!=0&&q!=0)
        cout<<" -- is not a palindrome.\n"<<endl;
        else if(p==0&&q!=0)
        cout<<" -- is a regular palindrome.\n"<<endl;
        else if(p!=0&&q==0)
        cout<<" -- is a mirrored string.\n"<<endl;
        else if(p==0&&q==0)
        cout<<" -- is a mirrored palindrome.\n"<<endl;
}
return 0;
}
