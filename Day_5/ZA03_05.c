#include <stdio.h>
 
int main()

{

    fflush(stdin);
 
    int zahl1, zahl2, zahl3, max;
 
    printf("Geben Sie drei ganze Zahlen ein.\n");

    printf("Erste Zahl: ");
    scanf("%d", &zahl1);
    fflush(stdin);

    printf("Zweite Zahl: ");
    scanf("%d", &zahl2);
    fflush(stdin);

    printf("Dritte Zahl: ");
    scanf("%d", &zahl3);
    fflush(stdin);
 
 
    if (zahl1 > zahl2)
    {
        if (zahl1 > zahl3)
        {
            max = zahl1;
        } 
        else
        {
            max = zahl3;
        }

    } 
    
    else 
    {
        if (zahl2 > zahl3)
        {
            max = zahl2;
        } 
        else 
        {
            max = zahl3;
        }

    }
 
    printf("Die größte Zahl ist die: %d\n", max);
 
    return 0;

}

 