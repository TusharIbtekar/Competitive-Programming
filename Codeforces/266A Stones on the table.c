#include<stdio.h>
int main()
{
    char str[100];
    int count=0,n,i,l,x;
    scanf("%d",&n);
    scanf("%s",str);
    l=strlen(str);
    for(i = 0;i < n;i++)
    {
        if(str[i] == str[i+1])
            count++;
    }
    if(l == count)
        count=1;
    x=l-count;

    printf("%d\n",count);
}
