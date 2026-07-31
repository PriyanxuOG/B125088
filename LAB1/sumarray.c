#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    int a[n], *p;

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    for(i = 0; i < n; i++)
        sum += *(p + i);

    printf("Sum = %d", sum);

    return 0;
}