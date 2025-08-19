#include <stdio.h>

int main() {

    fflush(stdin);

    int alter;

    printf("Geben Sie bitte Ihr Alter ein: ");
    scanf("%d", &alter);
    fflush(stdin);

    if (alter > 17)
    // if (alter >= 18) als alternative, oft sinnvoller
    {
        printf("In Deutschland gelten Sie als volljaehrig.");
    }

    else
    {
        printf("In Deutschland gelten Sie noch nicht als volljaehrig.");
    }

    return 0;
}