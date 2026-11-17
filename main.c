#include <stdio.h>

int main(void)
{
    double r;
    scanf("%f", &r);
    if (r > 0)
    {
        printf("%.2f", r * r * 22.0);
    }
    else
    {
        printf("NG");
    }
    return 0;
}
