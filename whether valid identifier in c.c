#include <stdio.h>
#include <ctype.h>

int main() {
    char str[50];
    int i, flag = 1;

    printf("Enter an identifier: ");
    scanf("%s", str);

    // First character check
    if (!(isalpha(str[0]) || str[0] == '_')) {
        flag = 0;
    }

    // Remaining characters check
    for (i = 1; str[i] != '\0'; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Valid identifier");
    else
        printf("Invalid identifier");

    return 0;
}

