#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};   // ASCII characters
    int i;

    printf("Enter a string: ");
    gets(str);   // for simplicity (you can use fgets in exams)

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Display frequency
    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}
