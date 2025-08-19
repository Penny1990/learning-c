#include <stdio.h>


int main()
{   
    
    float zahl = 1.5;


    // Erste if-else Verzwiegung
    if (zahl > 10.5)
    {
        printf("Die Zahl ist größer als 10.5.\n");

    } 
    else
    {
        printf("Die Zahl ist kleiner als 10.5.\n");
    }


    // Zweite if-else Verzweigung
    if (zahl < 4.5) 
    {
        printf("Die Zahl ist kleiner als 4.5.\n");
    } 
    else {
        printf("Die Zahl größer als 4.5.\n");
    }



    return 0;
}