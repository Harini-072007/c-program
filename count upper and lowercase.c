
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int upper = 0, lower = 0, digits = 0, special = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            upper++;
        else if (islower(str[i]))
            lower++;
        else if (isdigit(str[i]))
            digits++;
        else if (str[i] != '\n')   // ignore newline from fgets
            special++;
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
