#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    if(x==y)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(y<x)
    {
        z=24+(y-x);
        printf("O JOGO DUROU %d HORA(S)\n",z);
    }
    else
    {
        z=x-y;
        printf("O JOGO DUROU %d HORA(S)\n",z);
    }
}
