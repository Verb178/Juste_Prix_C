#include <stdio.h>
#define NOMBREMYSTERE 20

void main(void)
{
    int nombreEntre;
    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf_s("%i", & nombreEntre);
        // On compare le nombre entré avec le nombre mystère

        if (NOMBREMYSTERE > nombreEntre)
            printf("C'est plus ! ");
        else if (NOMBREMYSTERE < nombreEntre)
            printf("C'est moins ! ");
        else
            printf("Bravo, vous avez trouve le nombre mystere ");
    } while (nombreEntre != NOMBREMYSTERE);

}