#include <stdio.h>
int main()
{
    int zahl1 = 10;
    int zahl2 = 30;

    // TODO if-Zweig kann auch OHNE den else-Zweig stehen
    if (zahl1 < zahl2)
    {
        printf("\nZahl 1 %d ist kleiner als Zahl2 %d\n", zahl1, zahl2);
    }
    // Else-Block ist NICHT obligatorisch

    // TODO Wahrheiswerte entsprechen ganzzahligen Werte 0 oder 1
    int wahrheitswert = zahl1 < zahl2;
    // 1 = True
    // 0 = False
    printf("\nDer Wahrheitswert ist: %d\n", wahrheitswert);

    if (wahrheitswert == 0)
    {
        printf("\nFalsch\n");
    }

    // wahrheitswert = 1;
    printf("\nWahr\n");

    // .... Verwendung der Variablen wahrheitswert

    return 0;
}
