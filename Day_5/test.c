#include <stdio.h>

int main() {
    fflush(stdin);

    float kommazahl1;
    float kommazahl2;
    float ergebnis;
    char antwort;



while(antwort!='n') {
    printf("Geben sie eine Kommazahl an:");
    scanf("%f", &kommazahl1);
    fflush(stdin);

    printf("Geben sie eine zweite Kommazahl an:");
    scanf("%f", &kommazahl2);
    fflush(stdin);

    ergebnis = kommazahl1 * kommazahl2;

    printf("Das Ergebnis von %.2f * %.2f = %.2f\n", kommazahl1,kommazahl2,ergebnis);
    printf("Moechten Sie ein weiteres Produkt ermitteln ? (j/n)");
    scanf("%c", &antwort);
    fflush(stdin);
}

    printf("Dann eben nicht mehr");
    return 0;

}
 