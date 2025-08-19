#include <stdio.h>

int main()
{
    fflush(stdin);

    float punktzahl, gesamtpunktzahl;

    printf("Geben Sie bitte die maximal erreichbare Punktzahl ein: ");
    scanf(" %f", &gesamtpunktzahl);
    fflush(stdin);

    printf("Geben Sie bitte die erreichte Punktzahl ein: ");
    scanf(" %f", &punktzahl);
    fflush(stdin);

    float prozent = punktzahl / gesamtpunktzahl * 100;

    if (punktzahl >= gesamtpunktzahl / 2.0)
    {
        printf("Sie haben %.2f Prozent erreicht und bestanden.", prozent);
    }

    else 
    {
        printf("Sie haben %.2f Prozent erreicht und nicht bestanden.", prozent);
    }

    return 0;
}