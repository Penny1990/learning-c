#include <stdio.h>

int main()
{
    int zahl1 = 10;
    int zahl2 = 30;

    // Else-Block ist nicht notwendig, wenn nur ein if (falls) gebraucht wird
    if (zahl1 < zahl2)
    {
        printf("\nZahl 1 %d ist kleiner als Zahl2 %d\n", zahl1, zahl2);
    }


    // Wahrheitswerte entsprechen ganzzahligen Werte 0 und 1
    int wahrheitswert = zahl1 < zahl2;
    // 1 = true
    // 0 = false
    printf("\nDer Wahrheitswert ist: %d\n", wahrheitswert);


    // if/else mit der Variable "wahrheitswert"
    if (wahrheitswert == 0)
    {
        printf("\nFalsch!\n");
    }
    else
    {
        // wahrheitswert = 1;
        printf("\nWahr!\n");
    }

    return 0;
}