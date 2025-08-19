#include <stdio.h>
#include <windows.h>

int main()
{
    system("chcp 1252");
    system("cls");

    fflush(stdin);

    char zeichen1, zeichen2;

    printf("Geben Sie bitte ein beliebiges Zeichen ein: ");
    scanf(" %c", &zeichen1);
    fflush(stdin);

    printf("Geben Sie bitte nocheinmal das SELBE Zeichen ein: ");
    scanf(" %c", &zeichen2);
    fflush(stdin);

    if (zeichen1 == zeichen2)
    {
        printf("\nHervorragend! Sie scheinen mir ein echter Zeichensatz-Experte zu sein!");
    }

    else
    {
        printf("\nSind Sie sicher, dass %c und %c identische Zeichen sind?", zeichen1, zeichen2);
    }

    printf("\n\nDas Programm endet nun!");

    return 0;
}