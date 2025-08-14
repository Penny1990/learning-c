#include <stdio.h>

int main() {
    float kapital = 100.00;
    int jahr = 1;
    float prozent = 3;


    // Eingabe Benutzer
    printf("Bitte Startkapital in Euro eingeben: \n");
    scanf("%f", &kapital);   
    // & -> genutzt um die Variable ändern zu können

    printf("Bitte Zinsen in %% eingeben: \n");
    scanf("%f", &prozent);



    // Startausgabe


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