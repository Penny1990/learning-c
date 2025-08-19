#include <stdio.h>

int main() {

    fflush(stdin);

    float zahl1, zahl2, produkt;
    char auswahl = 'j';

    while (auswahl == 'j') {
        printf("Bitte geben Sie eine Kommazahl ein: ");
        scanf(" %f", &zahl1);
        fflush(stdin);

        printf("Bitte geben Sie eine Kommazahl ein: ");
        scanf(" %f", &zahl2);
        fflush(stdin);

        produkt = zahl1 * zahl2;

        printf("Das Produkt ist %.2f.\n", produkt);

        printf("\nNoch einen Durchlauf? (j/n)");
        scanf(" %c", &auswahl);
    }

    printf("Dann eben nicht mehr.");

    return 0;
}