

// --- LERNEN MIT C--- 

// Grundlagen:

#include <stdio.h>      // 1. Präprozessor-Direktive - teilt dem Compiler mit, dass der Inhalt der Datei stdio.h ins Programm eingefügt werden soll.
#include <stdlib.h>     // Für die Speicherverwaltung?

// 2. Funktionsdefinition
int main() {


    // 1. Variablen und Datentypen

    int ganzeZahl = 10;     // Deklariert eine ganze Zahl
    float gleitkommazahl = 5.75;    // Deklariert eine Gleitkommazahl
    double doppelteGleitkommazahl = 8.123456789;    // Deklariert eine doppelte Gleitkommazahl
    char buchstabe = 'A';   // Deklariert ein Zeichen
    char name[] = "Penny";  // Deklariert eine Zeichenkette


    // 3. Ausgabe von Variablen

    printf("Ganze Zahl: %d\n", ganzeZahl);      // Gibt eine ganze Zahl aus
    printf("Gleitkommazahl: %f\n", gleitkommazahl);     // Gibt die Gleitkommazahl aus
    printf("Gerundet auf 2 Dezimalstellen: %.2f\n", gleitkommazahl);    // Gibt die Gleitkommazahl auf 2 Stellen gerundet aus
    printf("Doppelte Gleitkommazahl: %f\n", doppelteGleitkommazahl);    // Gibt die doppelte Gleitkommazahl aus
    printf("Buchstabe: %c\n", buchstabe);   // Gibt das Zeichen aus
    printf("Name: %s\n", name);     // Gibt die Zeichenkette aus


    // 4. Operatoren

    int summe = ganzeZahl + 5;      // Addition
    int differenz = ganzeZahl - 3;  // Subtraktion
    int produkt = ganzeZahl * 2;    // Multiplikator
    int quotient = ganzeZahl / 2;   // Division
    int rest = ganzeZahl % 3;       // Modulus

    printf("Summe: %d\n", summe);   // Gibt die Summe aus
    printf("Differenz: %d\n," differenz);   // Gibt die differenz aus
    printf("Produkt: %d\n, produkt");       // Gibt das Produkt aus
    printf("Quotient: %d\n, quotient");     // Gibt den Quotienten aus
    printf("Rest: %d\n", rest);     // Gibt den Rest der Division aus


    // 5. Kontrollstrukturen

    if (ganzeZahl > 5) {    // Bedingte Anweisung
        printf("Die ganze Zahl ist größer als 5\n");
    }


    // 6. Schleifen

    for (int i = 0; i < 3; i++) {       // For-Schleife
        printf("For-Schleife: i ist: %d\n", i);
    }

    int i = 0;
    while (i < 3) {         // While-Schleife
        print("While-Schleife: i ist: &d\n", i);
        i++;
    }

    i = 0;
    do {            // Do-While-Schleife
        print("Do-While-Schleife: i ist: %d\n", i);
        i++;
    } while (i < 3); 


    // 7. Funktionen (Aufruf einer Funktion)

    int ergebnis = addiere(3, 4);   // Ruft die Funktion 'addiere' auf
    prinf("Ergebnis der Addition: %d\n", ergebnis);


    // 8 . Arrays

    int zahlen[] = {1, 2, 3};   // Deklariert ein Array
    printf("Erstes Element des Arrays: %d\n", zahlen[0]);   // Gibt das erste Element des Arrays aus


    // 9. Zeiger

    int *zeiger = &ganzeZahl;   // Deklariert einen Zeiger auf die Variable 'ganzeZahl'
    printf("Wert von ganzeZahl über Zeiger: %d\n", *zeiger);    // gibt den Wert von 'ganzeZahl' über den Zeiger aus

    return 0;
}









