#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int u,d,f,fo,day,h;
    float result;
    while(1)
    {
        result=0,fo=100;
        scanf("%d %d %d %d",&h,&u,&d,&f);
        if(h==0)
        break;
        for(day=1;;day++)
        {
            result=((u*fo)/100.0)+result;
            cout<<"day:"<<day<<"  height after climbed: "<<result;
            if(result>h)
            {
                printf("success on day %d\n",day);
                break;
            }
            result=result-d;
            cout<<" height after sliding: "<<result<<endl;
            fo=fo-f;
            if(fo<=0)
            fo=0;
            if(result<0)
            {
                printf("failure on day %d\n",day);
                break;
            }
        }
    }
    return 0;
}
