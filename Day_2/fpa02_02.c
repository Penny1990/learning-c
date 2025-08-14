#include <stdio.h>

int main() {
    float kapital = 100.00;
    int jahr = 1;
    float prozent = 3;


    printf("Startkapital beträgt %.2f Euro\n", kapital);
    kapital = kapital + kapital * (prozent/100);

    printf("Kapital nach %d Jahr(en): %.2f\n", jahr, kapital);
    kapital = kapital + kapital * (prozent/100);
    jahr = jahr + 1;

    printf("Kapital nach %d Jahr(en): %.2f\n", jahr, kapital);
    kapital = kapital + kapital * (prozent/100);
    jahr = jahr + 1;

    printf("Kapital nach %d Jahr(en): %.2f\n", jahr, kapital);
    kapital = kapital + kapital * (prozent/100);
    jahr = jahr + 1;

    printf("Kapital nach %d Jahr(en): %.2f\n", jahr, kapital);
    kapital = kapital + kapital * (prozent/100);
    jahr = jahr + 1;

    printf("Kapital nach %d Jahr(en): %.2f\n", jahr, kapital);

    return 0;
}