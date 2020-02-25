#include<stdio.h>
#include<string.h>

int main()
{
    int n, p, i, flag = 1;
    scanf("%d %d", &n, &p);
    char a[n];
    scanf("%s", a);
    for(i = 0; i+p < n; i++)
    {
        if(a[i] == '.' && a[i+p] == '.')
        {
            a[i] = '1';
            a[i+p] = '0';
            flag = 0;
        }
        else if(a[i] == '.')
        {
            if(a[i+p] == '0')
                a[i] = '1';
            else
                a[i] = '0';
            flag = 0;
        }
        else if(a[i+p] == '.')
        {
            if(a[i] == '1')
                a[i+p] = '0';
            else
                a[i+p] = '1';
            flag = 0;
        }
        else if(a[i] != a[i+p])
            flag = 0;
    }
    while(i < n)
    {
        if(a[i] == '.')
            a[i] = '1';
        i++;
    }
    if(flag)
    {
        printf("No\n");
    }
    else
        printf("%s\n", a);

}
