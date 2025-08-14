#include <stdio.h>

int main() {
    float kantenlaengeKubus = 3.75;
    float oberflaeche = kantenlaengeKubus * kantenlaengeKubus * 6;
    float volumen = kantenlaengeKubus * kantenlaengeKubus * kantenlaengeKubus;

    printf("********************************************\n*     Ergebnisse für Kantenlänge %.2f      *\n********************************************\n\n\tOberfläche: %.2f\n\tVolumen: %.2f", kantenlaengeKubus, oberflaeche, volumen);

    return 0;
}