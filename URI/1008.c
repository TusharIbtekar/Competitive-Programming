#include<stdio.h>
int main()
{
    int a,b;
    double c,salary;
    scanf("%d %d",&a,&b);
    scanf("%lf",&c);
    salary=(b*c);
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;

}
