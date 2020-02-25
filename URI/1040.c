#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,Media,x,Media_final;
    scanf("%lf %lf %lf %lf",&N1, &N2, &N3, &N4);
    Media=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1lf\n",Media);
    if(Media>=7.0)
        printf("Aluno aprovado.\n");
    else if(Media<5.0)
        printf("Aluno reprovado.\n");
    else if(Media>=5.0&&Media<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&x);
        printf("Nota do exame: %.1lf\n",x);
        Media_final=(Media+x)/2;
        if(Media_final>=5.0)
            printf("Aluno aprovado.\n");
        else if(Media_final<=4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",Media_final);
    }
    return 0;

}
