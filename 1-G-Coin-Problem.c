#include <stdio.h>

int main() {
    int v;

    if (scanf("%d", &v) != 1) return 1;

    int denomination[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    for (int i = 0; i < 9; i++) {
        if (v == 0) break;
        count += v / denomination[i];
        v %= denomination[i];
    }

    printf("%d", count);
    return 0;
}
