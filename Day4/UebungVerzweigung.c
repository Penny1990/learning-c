#include <stdio.h>

int main()
{
    int aktJahr;
    int gebJahr;
    char schonGeburtstagGehabt;
    int alter;

    printf("Geben Sie bitte das aktuelle Jahr ein: ");
    scanf("%d", &aktJahr);
    fflush(stdin);

    printf("Geben Sie bitte Ihr Geburtsjahr ein: ");
    scanf("%d", &gebJahr);
    fflush(stdin);

    printf("Hatten Sie dieses Jahr schon Geburtstag? (j/n): ");
    scanf("%c", &schonGeburtstagGehabt);
    fflush(stdin);

    // Verzweigung
    // (schonGeburtstagGehabt == 'j') 

    if (schonGeburtstagGehabt == 'j')
    {
        alter = aktJahr - gebJahr;
    }

    else
    {
        alter = aktJahr - gebJahr - 1;
    }

    printf("Sie sind %d Jahre alt.", alter);
}