#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[5];
    int i, max = 0;
    float sum = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d%s%f", &s[i].roll, s[i].name, &s[i].marks);

        if(s[i].marks > s[max].marks)
            max = i;

        sum += s[i].marks;
    }

    printf("Highest Marks:\n");
    printf("%d %s %.2f\n", s[max].roll, s[max].name, s[max].marks);

    printf("Average = %.2f", sum / 5);

    return 0;
}