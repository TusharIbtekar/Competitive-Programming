#include<stdio.h>
int main()
{
    int n, k, count = 0, i;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
    {
        printf("%c", 'a'+count);
        count++;
        if(count+1 > k)
            count = 0;
    }
}
