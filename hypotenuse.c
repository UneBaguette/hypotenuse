#include <stdio.h>
#include <math.h>

int main()
{
    // déclaration de mes variables
    int ab, bc;
    double r;
    // le programme débute ici
    printf("Programme pour calculer l'hypoténuse, soit ABC un triangle rectangle en B\n");
    printf("Quelle est la longueur de AB? (en cm) : ");
    scanf("%i", &ab); // assigne à ab le nombre ou le chiffre que l'on tape
    printf("Quelle est la longueur de BC? (en cm) : ");
    scanf("%i", &bc); // assigne à bc le nombre ou le chiffre que l'on tape
    // le calcul est fait ici
    ab = pow(ab, 2);
    bc = pow(bc, 2);
    r = ab + bc;
    // le résulat du calcul
    printf("La longueur de l'hypoténuse est de %.2f cm\n", sqrt(r));
}
