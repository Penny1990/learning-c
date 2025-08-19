#include <stdio.h>
#include <windows.h>

int main()
{   
    system("chcp 1252");
    system("cls");

    fflush(stdin); 

    char buchstabe1, buchstabe2;
    int auswahl;

    printf("Bitte geben Sie einen ersten Buchstaben ein: ");
    scanf(" %c", &buchstabe1);
    fflush(stdin);

    printf("Bitte geben Sie einen zweiten Buchstaben ein: ");
    scanf(" %c", &buchstabe2);
    fflush(stdin);

    printf("\nWählen Sie bitte aus ...\n");
    printf("(1) für Ausgabe nebeneinander\n");
    printf("(2) für Ausgabe übereinander\n");
    printf("Ihre Auswahl: ");
    scanf(" %d", &auswahl);
    fflush(stdin);

    if (auswahl == 1)
    {
        printf("\nAusgabe:\n%c%c", buchstabe1, buchstabe2);
    }

    else
    {
        printf("\nAusgabe\n%c\n%c", buchstabe1, buchstabe2);
    }

    return 0;

}