#include <stdio.h>

main() {
    double a = 1.2345;
    double b = 2.3456;
    double c = 3.4567;
    double summe = a + b + c;

    printf("%.4f %c %.4f %c %.4f %c %.4f\n", a, '+', b, '+', c, '=', summe);
}