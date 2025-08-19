#include <stdio.h>

int main()
{
    fflush(stdin);

    float punktzahl;

    printf("Geben Sie Ihre Punktzahl (0-100) ein: ");
    scanf("%f", &punktzahl);
    fflush(stdin);

    if (punktzahl >= 90 && punktzahl <= 100)
    {
        printf("Sehr gut!\n");
    }
    else if (punktzahl >= 75 && punktzahl <= 89)
    {
        printf("Gut!\n");
    }
    else if (punktzahl >= 50 && punktzahl <= 74)
    {
        printf("Befriedigend\n");
    } 
    else if (punktzahl >= 0 && punktzahl <= 49)
    {
        printf("Nicht bestanden\n");
    } 
    else 
    {
        printf("Ungültige Punktzahl! Bitte eine Zahl zwischen 0 und 100 eingeben.\n");
    }

    return 0;
}