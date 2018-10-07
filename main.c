#include <stdio.h>
#include <complex.h>
#include "complex.c"


int main() {
    struct complex_Number a = {1, 1};
    struct complex_Number b = {2, 2};
    struct complex_Number aplusb = add(a, b);
    printf("A + B = (%g + %gi) \n", aplusb.a, aplusb.b);

    struct complex_Number a1 = {1, 1};
    struct complex_Number b1 = {2, 2};
    struct complex_Number aminusb = subtract(a, b);
    printf("A + B = (%g + %gi) \n", aminusb.a, aminusb.b);

    struct complex_Number a2 = {1, 1};
    struct complex_Number b2 = {2, 2};
    struct complex_Number atimesb = multiply(a, b);
    printf("A + B = (%g + %gi) \n", atimesb.a, atimesb.b);


    struct complex_Number a3 = {1, 1};
    struct complex_Number b4 = {2, 2};
    struct complex_Number adividesbyb = divide(a, b);
    printf("A + B = (%g + %gi) \n", adividesbyb.a, adividesbyb.b);

    return 0;
}