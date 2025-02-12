#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    float mark;
    printf("Enter mark: ");
    scanf("%f", &mark);  

    char initial;
    printf("Enter initial: ");
    scanf(" %c", &initial);  

    char name[10];
    printf("Enter name: ");
    scanf("%s", name);  

    printf("Year: %d\n", year);
    printf("Mark: %.2f\n", mark);
    printf("Initial: %c\n", initial);
    printf("Name: %s\n", name);

    return 0;
}
