#include <stdio.h>

int main() {

    // Aufgabe 1
    printf("Aufgabe 1:\n");

    float startpreis;

    printf("Startpreis eingeben: \n");
    scanf("%f", &startpreis);

    startpreis *= 1.07;
    printf("Erhöhung um 7 Prozent: %.2f\n", startpreis);

    startpreis *= 1.12;
    printf("Erhöhung um 12 Prozent: %.2f\n\n\n", startpreis);



    // Aufgabe 2
    printf("Aufgabe 2:\n");

    float kilometer;

    printf("Kilometer eingeben:\n");
    scanf("%f", &kilometer);

    float meilen = kilometer /= 1.609;
    printf("Kilometer in Meilen: %.2f\n", meilen);

    float fuss = kilometer *= 5280;
    printf("Meilen in Fuß: %.2f\n\n\n", fuss);



    // Aufgabe 3
    printf("Aufgabe 3: \n");

    int punktzahl = 17;
    printf("Punktzahl: %d\n", punktzahl);

    punktzahl += 10;
    printf("Punktzahl plus 10: %d\n", punktzahl);

    punktzahl += 5;
    printf("Punktzahl plus 5: %d\n\n\n", punktzahl);



    // Aufgabe 4
    printf("Aufgabe 4: \n");

    float start_kontostand = 13.37;

    start_kontostand *= 1.20;
    printf("Plus 20%% Zinsen: %.2f\n", start_kontostand);

    start_kontostand *= 0.85;
    printf("Minus 15%% Zinsen: %.2f\n", start_kontostand);



    return 0;
}