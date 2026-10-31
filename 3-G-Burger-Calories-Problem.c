#include <stdio.h>
#include <stdlib.h>

int compareDescending(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (y > x) - (y < x);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compareDescending);

    long long total = 0;
    long long multiplier = 1;

    for (int i = 0; i < n; i++) {
        total += multiplier * arr[i];
        multiplier *= 3;
    }

    printf("%lld", total);
    return 0;
}
