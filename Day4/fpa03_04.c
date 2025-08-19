#include <stdio.h>

int main()
{
    fflush(stdin);

    int zahl;

    printf("Geben Sie bitte eine ganze Zahl ein: ");
    scanf("%d", &zahl);
    fflush(stdin);

    if (zahl < 0)
    {
        printf("Ihre Eingabe ist %d eine negative Zahl.", zahl);
    }

    if (zahl == 0)
    {
        printf("\nIhre Eingabe ist Null.");
    }

    if (zahl > 0 && zahl <=10)
    {
        printf("\nIhre Eingabe %d ist eine positive Zahl.", zahl);
    }

    if (zahl > 10)
    {
        printf("\nIhre Eingabe %d ist eine positive Zahl.", zahl);
        printf("\nIhre Eingabe %d liegt sogar oberhalb von 10!", zahl);
    }

    return 0;


}