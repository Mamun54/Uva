#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
long long int prime[500000]={0};
vector <int>prime_list;
int seive()
{
    long int i,j,r;
    r=sqrt(500000);
    for(i=2;i<r;i++)
    {
        if(prime[i]==0)
        {
            prime_list.push_back(i);
            for(j=i*2;j<500000;j=j+i)
            prime[j]=1;
        }
    }
    return 0;
}
int main()
{
    seive();
    int n;
    while((scanf("%d",&n))&&n)
    {
        vector<int>a;
        for(int i=0;i<n;i++)
        a.push_back(i+1);
        int index=0;
        int num=0;
        while(n>1)
        {
            num=(num+(prime_list[index++]%n)-1)%a.size();
            a.erase(a.begin()+num);
            n--;
        }
        printf("%d\n",a[0]);
        a.clear();
        }
        return 0;
    }
