#include<stdio.h>
int main()
{
    int sh,eh,sm,em,dh,dm;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if(sh==eh&&sm==em)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else{
    if(eh<sh)
    {
        dh=24+(eh-sh);
    }
    else
        dh=eh-sh;
    if(em<sm)
        {
        dm=60+(em-sm);
        dh--;
        }
    else
        dm=em-sm;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
    }
    return 0;

}
