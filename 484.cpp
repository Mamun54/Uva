#include<iostream>
#include<cstdio>
#include<cctype>
#include<map>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    map<int,int>m;
    vector<int>::iterator it;
    map<int,int>::iterator itt;
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        if(m[n]>=1)
        {
            m[n]++;
        }
        else
        {
            v.push_back(n);
            m[n]=1;
        }
    }

    for(it=v.begin();it!=v.end();it++)
    {
        itt=m.find(*it);
        cout<<(*itt).first<<" "<<(*itt).second<<endl;
    }
    return 0;
}
