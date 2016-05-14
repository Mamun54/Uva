#include<iostream>
#include<math.h>
#include<cctype>
using namespace std;
int prime[90000];
void creat_prime()
{
    int m=1;
    long long int n,i;
     prime[0]=2;
    for(n=3;n<=1000000;n++)
    {
        int p=0;
        int sq=sqrt(n);
        for(i=2;i<=sq;i++)
        {
            if(n%i==0)
            {
                p++;
                break;
            }
        }
        if(p==0)
        {
            prime[m]=n;
            m++;
        }

          }
          prime[m]=NULL;
}
int search(int item)
{
    int a=0;
    while(prime[a]<item)
    {
        a++;
    }
    a--;

    return a;
}
void find_add(int p,int item)
{
    for(int i=0;;i++)
    {
        if(prime[i]+prime[p]==item)
        {
            cout<<item<<" = "<<prime[i]<<" + "<<prime[p]<<endl;
            break;
        }
        if(prime[i]+prime[p]>item)
        {
            i=-1;
            p--;
            continue;
        }

    }
}
int main()
{
    int p,item;
    creat_prime();
    while(1)
    {
        cin>>item;
        if(item==0)
        break;
        p=search(item);
        find_add(p,item);
    }
  return 0;

}
