#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    queue<int>myqueue;
    int i,n,p;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        break;
        for(i=1;i<=n;i++)
        {
            myqueue.push(i);
        }
        printf("Discarded cards:");
        while(n!=1)
        {
            printf(" %d",myqueue.front());
            if(n==2)
            ;
            else
            printf(",");
            myqueue.pop();
            myqueue.push(myqueue.front());
            myqueue.pop();
            n--;
        }
        printf("\nRemaining card: %d\n",myqueue.front());
        myqueue.pop();
    }
    return 0;
}
