#include <stdio.h>

int main() {

    // Aufgabe 1
    printf("Aufgabe 1:\n");
    int zahl = 5;
    printf("%i\n", zahl);
    zahl += 3;
    printf("%i\n", zahl);
    zahl += 2;
    printf("%i\n\n", zahl);


    // Aufgabe 2
    printf("Aufgabe 2:\n");
    int punktestand = 30;
    punktestand -= 5;
    printf("%i\n", punktestand);
    punktestand -= 8;
    printf("%i\n\n", punktestand);


    // Aufgabe 3
    printf("Aufgabe 3:\n");
    float preis = 9.99;
    preis *= 1.1;
    printf("%.2f\n", preis);
    preis *= 1.05;
    printf("%.2f\n\n", preis);


    // Aufgabe 4
    printf("Aufgabe 4:\n");
    float strecke = 10.5;
    float zeit = 1.3;
    printf("Zu laufende Strecke:\n");
    printf("%.2f Kilometer\n", strecke);
    printf("Gesamtzeit:\n");
    printf("%.2f Stunden\n", zeit);
    strecke /= zeit;
    printf("Laufgeschwindigkeit:\n");
    printf("%.2f km/h\n", strecke);

    return 0;
}

