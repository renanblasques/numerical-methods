#include <stdio.h>
#include <math.h>

double g(double x)
{
    return 1 + sqrt(x);
}

int main()
{
    double x = 0.5;
    int k = 0;
    for (k = 0; k < 100; k++)
    {
        printf("x = %.20f | g(x) = %.20f\n", x, g(x));
        x = g(x);
        if (x == g(x))
            break;
    }

    printf("\nfinalizado após %d iterações\n", k);
    printf("\n-------------\nraíz da função: %f\n-------------\n", x);

    return 0;
}