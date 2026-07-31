#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    int n, i, max = 0;

    scanf("%d", &n);

    struct Student *s = (struct Student *)malloc(n * sizeof(struct Student));

    for(i = 0; i < n; i++) {
        scanf("%d%s%f", &s[i].roll, s[i].name, &s[i].marks);

        if(s[i].marks > s[max].marks)
            max = i;
    }

    printf("\nStudent with Highest Marks:\n");
    printf("%d %s %.2f\n", s[max].roll, s[max].name, s[max].marks);

    free(s);

    return 0;
}