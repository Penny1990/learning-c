#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void spielStarten(char *name) {

    int zufallszahl = rand() % 100 + 1;
    int tipp = 0;
    int score = 0;

    printf("Welche Zahl zwischen 1 und 100  habe ich mir ausgedacht?\n");
    
    while (tipp != zufallszahl) {
        printf("Dein Tipp: ");
        
        if (scanf("%d", &tipp) != 1) {
            printf("Bitte nur Zahlen eingeben!\n");
            while (getchar() != '\n');      // Eingabepuffer leeren
            continue;       // Schleife neu starten
        }

        score++;

        int abstand = abs(zufallszahl - tipp);

        if (tipp < zufallszahl) {
            printf("Die Zahl ist zu klein!\n");
        }
            else if (tipp > zufallszahl) {
                printf("Die Zahl ist zu groß!\n");
            }
            else if (tipp == zufallszahl) {
                printf("Richtig! die Zahl war %d!\nDu hast %d Versuche gebraucht!\n", zufallszahl, score);
                break;
            }
            if (abstand <= 5) {
                printf("Nah dran!\n");
            }
    }
}

int main() {

    char name[20];
    char nochmal = 'J';

    printf("Wie heißt du?\n");
    scanf("%s", &name);

    srand(time(NULL));

    while (nochmal == 'j' || nochmal == 'J') {
        spielStarten(name);
        printf("\n%s möchtest du nochmal spielen? (j/n): ", name);
        scanf(" %c", &nochmal);

        if (nochmal == 'n' || nochmal == 'N') {
            break;
        }
    }

    printf("Danke fürs spielen, %s! Bis zum nächsten mal! ;)");
    return 0;
}