#include <stdio.h>

int main()
{
    fflush(stdin);

    float zielkapital, prozentsatz, startkapital, aktuellesKapital;
    int jahr;

    printf("Bitte geben Sie das Startkapital ein: ");
    scanf("%f", &startkapital);
    fflush(stdin);

    printf("Bitte geben Sie Ihr Zielkapital ein: ");
    scanf("%f", &zielkapital);
    fflush(stdin);

    printf("Bitte geben Sie den Prozentsatz ein: ");
    scanf(" %f", &prozentsatz);
    fflush(stdin);

    aktuellesKapital = startkapital;
    jahr = 0;

    while (aktuellesKapital < zielkapital)
    {
        aktuellesKapital = aktuellesKapital * (prozentsatz+100)/100;
        jahr = jahr + 1;
    }

    printf("Das Kapital beträgt %.2f Euro nach %d Jahren.\n", aktuellesKapital, jahr);

    return 0;

}