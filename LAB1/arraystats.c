#include <stdio.h>

int main() {
    int n, i, max, min;
    float avg, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i = 0; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
        sum += a[i];
    }

    avg = sum / n;

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
    printf("Average = %.2f\n", avg);

    return 0;
}