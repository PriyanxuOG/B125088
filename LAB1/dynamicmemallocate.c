#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Elements:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);

    return 0;
}