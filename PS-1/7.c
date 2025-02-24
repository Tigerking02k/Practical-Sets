// Write a C program to find out distance travelled by the equation d = ut + .5at^2
#include <stdio.h>
int main()
{
    float d, u, t, a;
    printf("Enter the initial velocity u = ");
    scanf("%f", &u);
    printf("Enter the acceleration a = ");
    scanf("%f", &a);
    printf("Enter the time t = ");
    scanf("%f", &t);
    d = u * t + .5 * a * t * t;
    printf("The distance is %.2f", d);
    return 0;
}