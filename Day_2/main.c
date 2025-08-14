// Präprozessoranweisung
#include <stdio.h>
// stdio.h -> Bibliothek für Funktionen wird inkludiert (Standard Input Output)

// Weitere selbst definierte Funktionen bauen
// ....

// main()-Funktion
int main()
// Start des Anweisungsblocks
{
    // Anweisungen, die mit Semikolon abgeschlossen werden
    // Definition: int
    // Deklaration: a
    // Initialisierung: Das Literal 1
    // Zuweisungsoperator: =
    int a = 1;

    // Überschreibung des Wertes der Variable "a"
    a = 2;
    a = 2 + 4;
    a = a + 3;

    // Print()-Funktion für die Ausgabe

    // Platzhalter notwendig zur Ausgabe von
    // int: %d %i
    // float / double: %f
    // char: %c

    // Platzhalter ~ Zugriff auf den Wert im Speicher a -> 01101100...
    printf("\n%d\n%d\n", a, a);

    // "" -> Zeichenkette
    // \t -> Zeichen für Tabulatoren
    // \n -> Zeichen für Zeilenumbrüche
    //
}
