//
#include <stdio.h>

int LISLength(int n, int arr[n]) {
    int lis[n];
    int max = 1;

    for (int i = 0; i < n; i++)
        lis[i] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (lis[i] > max)
            max = lis[i];
    }

    return max;
}

int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Length of LIS: %d\n", LISLength(n, arr)); // এখানে অর্ডার ঠিক করলাম

    return 0;
}

