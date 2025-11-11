#include <stdio.h>

int main () {
    float C, F;
    printf ("Enter temperature in cels"); // Likely meant "celsius"
    scanf ("%f", &C);
    F = (C * 9 / 5) + 32;
    printf ("Fahrenheit = %.2f", F);
    return 0;
}
