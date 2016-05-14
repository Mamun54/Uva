#include<stdio.h>
#include<string.h>
void reverse(char *a)
{
    int i;
    int len = strlen(a);
    char b[102];
    for(i=0;a[i];i++)
    {
        b[i] = a[len-1-i];
    }
    b[i] = '\0';
    printf("%s",b);
}
int main()
{
    int n,i,j,len;
    char a[103],str[103],ch;
    while(scanf("%d%c",&n,&ch) && n)
    {
        gets(str);
        len = strlen(str);

        for(i=0,j=0;str[i];i++)
        {
               a[j++] = str[i];
            if(!((i+1)%(len/n)))
            {
               a[j]='\0';
                reverse(a);
                j=0;

            }
        }
        printf("\n");
    }
    return 0;
}
