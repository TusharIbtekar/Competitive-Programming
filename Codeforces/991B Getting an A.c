#include<stdio.h>
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int ar[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] == 5)
            count++;
    }
    printf("%d", n-1-count);

}
