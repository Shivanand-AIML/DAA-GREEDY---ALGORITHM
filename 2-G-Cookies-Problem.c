#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main() {
    int n, m;
    int g[30000], s[30000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &g[i]);

    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &s[i]);

    qsort(g, n, sizeof(int), compare);
    qsort(s, m, sizeof(int), compare);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s[j] >= g[i]) i++;
        j++;
    }

    printf("%d\\n", i);
    return 0;
}
