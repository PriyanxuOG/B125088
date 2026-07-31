#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    scanf("%d%s%f", &p->roll, p->name, &p->marks);

    printf("%d\n", p->roll);
    printf("%s\n", p->name);
    printf("%.2f\n", p->marks);

    return 0;
}