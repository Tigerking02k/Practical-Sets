// Write a C program to prepare pay slip using following data. Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, [Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf ]
#include<stdio.h>
int main()
{
    float basic, da, hra, ma, pf, gross, nt;
    printf("Enter a basic salary = ");
    scanf("%f", &basic);
    da=.10*basic;
    hra=.0750*basic;
    ma=300;
    pf=.1250*basic;
    gross=basic+da+hra+ma;
    nt=gross-pf;
    printf("\nPay Slip\n");
    printf("da    = %.2f\n", da);
    printf("hra   = %.2f\n", hra);
    printf("ma    = %.2f\n", ma);
    printf("pf    = %.2f\n", pf);
    printf("gross = %.2f\n", gross);
    printf("nt    = %.2f\n", nt);
    return 0;
}