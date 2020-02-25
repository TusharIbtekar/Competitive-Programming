#include<stdio.h>
int main()
{
    long long int N;
    int a,b,c,d,e,f,g;
    scanf("%llu",&N);
    printf("%llu\n",N);
    a=N/100;
    b=(N%100)/50;
    c=((N%100)%50)/20;
    d=((((N%100)%50)%20)/10);
    e=((((N%100)%50)%20)%10)/5;
    f=(((((N%100)%50)%20)%10)%5)/2;
    g=((((((N%100)%50)%20)%10)%5)%2)/1;
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,b,c,d,e,f,g);
}
