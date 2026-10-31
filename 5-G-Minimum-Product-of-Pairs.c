#include <stdio.h>
#include <stdlib.h>

int compareAscending(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int compareDescending(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (y > x) - (y < x);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);

    qsort(arr1, n, sizeof(int), compareAscending);
    qsort(arr2, n, sizeof(int), compareDescending);

    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += (long long)arr1[i] * arr2[i];
    }

    printf("%lld", total);
    return 0;
}
