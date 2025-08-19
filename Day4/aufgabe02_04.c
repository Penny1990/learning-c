#include <stdio.h>

int main()
{
    fflush(stdin);

    float gesamtpreis, ticketpreis;
    int personen_anzahl;

    printf("Geben Sie bitte den Einzelpreis pro Ticket ein (in Euro): ");
    scanf(" %f", &ticketpreis);
    fflush(stdin);

    printf("Geben Sie bitte die Anzahl der Personen ein: ");
    scanf(" %d", &personen_anzahl);
    fflush(stdin);

    if (personen_anzahl > 4)
    {
        gesamtpreis = ticketpreis * personen_anzahl * 0.9;
        printf("Gesamtpreis: %.2f Euro", gesamtpreis);
    }

    else
    {
        gesamtpreis = ticketpreis * personen_anzahl;
        printf("Gesamtpreis: %.2f Euro", gesamtpreis);
    }


    return 0;
}