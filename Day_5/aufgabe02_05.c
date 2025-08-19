#include <stdio.h>

int main()
{
    char zeichen;
    int zahl, auswahl, count;

    printf("Bitte geben Sie ein Zeichen ein: ");
    scanf(" %c", &zeichen);
    fflush(stdin);

    printf("Bitte geben Sie eine positive Zahl ein: ");
    scanf(" %i", &zahl);
    fflush(stdin);

    printf("(1) Die Ausgabe wird NEBENEINANDER ausgeführt\n");
    printf("(2) Die Ausgabe wird ÜBEREINANDER ausgeführt");
    scanf(" %i", &auswahl);
    fflush(stdin);

    


    while (count < zahl)
    {
        if (auswahl == 1)
        {
            printf("%c", zeichen);
        }
        else if (auswahl == 2)
        {
            printf("%c\n", zeichen);
        }
        else 
        {
            printf("Ungültige Auswahl!\n");
            break;
        }

        count++;
    }

    return 0;
    
}