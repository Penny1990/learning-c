#include <stdio.h>

int main() {

    char zeichen;
    int zahl, auswahl, count;

    printf("Bitte geben Sie ein Zeichen ein: ");
    scanf(" %c", &zeichen);
    fflush(stdin);

    printf("Bitte geben Sie eine positive Zahl ein: ");
    scanf("%d", &zahl);
    fflush(stdin);

    printf("(1) Die Ausgabe wird NEBENEINANDER ausgeführt\n");
    printf("(2) Die Ausgabe wird ÜBEREINANDER ausgeführt\n");
    printf("Auswahl: ");
    scanf("%d", &auswahl);
    fflush(stdin);

    if (auswahl == 1) {
        for (count = 0; count < zahl; count++) {
            printf("%c", zeichen);
        }
    } 
    else if (auswahl == 2) {
        for (count = 0; count < zahl; count++) {
            printf("%c\n", zeichen);
        }
    } 
    else {
        printf("Ungültige Auswahl!\n");
    }

    return 0;
}
