#include <stdio.h>

// Function to reverse elements in the array from index start to end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int N, K;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter K (number of positions to rotate right): ");
    scanf("%d", &K);

    // Handle cases where K >= N
    K = K % N;

    // Step 1: Reverse the whole array
    reverse(arr, 0, N - 1);

    // Step 2: Reverse first K elements
    reverse(arr, 0, K - 1);

    // Step 3: Reverse remaining N-K elements
    reverse(arr, K, N - 1);

    printf("Array after right rotation:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
