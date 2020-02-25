#include<stdio.h>
int main()
{
    double A,B,C,R1,R2,del;
    scanf("%lf %lf %lf",&A,&B,&C);
    del=B*B-4*A*C;
    if(del<0||A==0)
        printf("Impossivel calcular\n");
    else
    {
        R1=(-B+sqrt(del))/(2*A);
        R2=(-B-sqrt(del))/(2*A);
        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }
    return 0;
}
