#include <stdio.h>
int main()
{
    int aktJahr;
    int gebJahr;
    char schonGeburtstagGehabt;
    int alter;
    printf("Geben Sie bitte das aktuelle Jahr ein: ");
    scanf(" %d", &aktJahr);
    printf("Geben Sie bitte Ihr Geburtsjahr ein: ");
    fflush(stdin);
    scanf(" %d", &gebJahr);
    printf("Hatten Sie dieses Jahr schon Geburtstag(j / n): ");
    fflush(stdin);
    scanf(" %c", &schonGeburtstagGehabt);
    // TODO Verzweigung
    // TODO (schonGeburtstagGehabt == 'j') => Bedingung -> Vergleichsoperatoren notewndig
    // Bei if oder else kein ; erlaubt
    if (schonGeburtstagGehabt == 'j')
    // TODO Zeile 20 - 22 => Wahr-Zweig, Bedingung aus Zeile 18 trifft zu => True
    {
        alter = aktJahr - gebJahr;
    }
    // TODO Zeile 24 - 27 => Ansonsten-Zweig, Bedingung aus Zeile 18 trifft nicht (!) zu => False
    else
    {
        alter = aktJahr - gebJahr - 1;
    }
    printf("Sie sind %d Jahre alt", alter);

    return 0;
}
