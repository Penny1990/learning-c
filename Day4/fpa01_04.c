#include <stdio.h>

int main()
{
    fflush(stdin);

    int zahl1, zahl2, zahl3;

    printf("Geben Sie bitte eine erste ganze Zahl ein: ");
    scanf(" %d", &zahl1);
    fflush(stdin);

    printf("Geben Sie bitte eine zweite ganze Zahl ein: ");
    scanf(" %d", &zahl2);
    fflush(stdin);


    if (zahl1 > zahl2)
    {
        zahl3 = zahl1;
    }

    else
    {
        zahl3 = zahl2;
    }

    printf("Das Maximum aus %d und %d ist %d.", zahl1, zahl2, zahl3);

    return 0;
}