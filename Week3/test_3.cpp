#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
    double interval;
    int i;
    printf("---------------------------------\n");
    printf("Table of sin values\n");
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        printf("sin(% lf) = % lf \t", interval, fabs(sin(interval)));
    }
    printf("---------------------------------\n");
    printf("Table of cosine values\n");
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        printf("cos(% lf) = % lf \t", interval, fabs(cos(interval)));
    }

    printf("\n++ +++++\n");
    return 0;
}