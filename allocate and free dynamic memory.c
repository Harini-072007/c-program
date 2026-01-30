#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory is allocated
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read values
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Display values
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    printf("\nMemory successfully freed.\n");

    return 0;
}
