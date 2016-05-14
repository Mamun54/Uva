#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <string>
#include <cctype>
#include <algorithm>
#include <bitset>
#include <set>
#include <utility>
using namespace std;

int parent[500];
vector< pair< int , pair<int,int > > >disk;
int find_representative(int m)
{
    if(parent[m]==m)
        return m;
    else
        return parent[m] = find_representative(parent[m]);
}
int dijkstra_pair(int n)
{
    sort(disk.begin(),disk.end());
    for(int i=0;i<=n;i++)
        parent[i]=i;
    int cnt =0, total =0;
    for(int i=0;i<(int)disk.size();i++)
    {
        int u = find_representative(disk[i].second.first);
        int v = find_representative(disk[i].second.second);

        if(u!=v)
        {
            parent[u] = v;
            cnt++;
            total +=disk[i].first;
            if(cnt ==n-1)
                return total;
        }
    }
    return -1;
}
int main()
{
    int m,n;
    map<string,int>mp;
    for(;;)
    {
        cin>>m>>n;
        if(m==0 && n==0)
            break;
        string s1,s2;
        int j = 1;
        for(int i=0;i<m;i++)
        {
            cin>>s1;
            if(mp.find(s1)==mp.end())
                mp[s1]=j++;
        }
        int w;
        for(int i= 0 ;i<n;i++)
        {
            cin>>s1>>s2>>w;
            disk.push_back(make_pair(w,make_pair(mp.find(s1)->second,mp.find(s2)->second)));
        }
        cin>>s1;
        int ret = dijkstra_pair(m);
        if(ret ==-1)
            cout<<"Impossible"<<endl;
        else
            cout<<ret<<endl;
    }
    return 0;
}
