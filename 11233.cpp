#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,a,l,m,p;
    string st[500][2],pt;
    scanf("%d %d",&l,&m);
    getchar();
    for(i=0;i<l;i++)
    {
        for(j=0;j<=1;j++)
        cin>>st[i][j];
    }
    for(i=0;i<m;i++)
    {
        p=0;
        cin>>pt;
        int len=pt.size();
        for(j=0;j<l;j++)
        {
            for(k=0;k<1;k++)
            {
                if(st[j][k]==pt)
                {
                    cout<<st[j][1]<<endl;
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==0)
       {
        int a=len-1;
        if(pt[a]=='y'&&((pt[a-1]!='a')&&(pt[a-1]!='e')&&(pt[a-1]!='i')&&(pt[a-1]!='o')&&(pt[a-1]!='u')))
        {
            pt[a]='i';
            cout<<pt<<"es"<<endl;
        }
        else if((pt[a]=='o')||(pt[a]=='s')||(pt[a]=='x')||((pt[a-1]=='c')&&(pt[a]=='h'))||((pt[a-1]=='s')&&(pt[a]=='h')))
        {
            cout<<pt<<"es"<<endl;
        }
        else
        cout<<pt<<"s"<<endl;
       }
    }
    return 0;
}
