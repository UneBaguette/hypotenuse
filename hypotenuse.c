#include <stdio.h>
#include <math.h>

int main(void)
{
    int ab, bc;
    double r;
    printf("Programme pour calculer l'hypoténuse, soit ABC un triangle rectangle en B\n");
    printf("Quelle est la longueur de AB? (en cm) : ");
    scanf("%i", &ab);
    printf("Quelle est la longueur de BC? (en cm) : ");
    scanf("%i", &bc);
    ab = pow(ab, 2);
    bc = pow(bc, 2);
    r = ab + bc;
    printf("La longueur de l'hypoténuse est de %.2f cm\n", sqrt(r));
}