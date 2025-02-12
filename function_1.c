#include <stdio.h>

int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);
int mod(int n1, int n2);

int main() {
    int n1, n2;
    char operator;

    printf("Enter 1st number: ");
    scanf("%d", &n1);

    printf("Enter 2nd number: ");
    scanf("%d", &n2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    int res;
    float res_div;
    switch (operator) {
        case '+':
        res = add(n1, n2);
        printf("%d\n", res);
        break;
        case '-':
        res = sub(n1, n2);
        printf("%d\n", res);
        break;
        case '*':
        res = mul(n1, n2);
        printf("%d\n", res);
        break;
        case '/':
            if (n2 == 0) {
                printf("Division by zero error!\n");
            } else {
                res_div = (float)div(n1, n2);
                printf("%.2f\n", res_div);
            }
            break;
        case '%':
            res = mod(n1, n2);
            printf("%d\n", res);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int mul(int n1, int n2) {
    return n1 * n2;
}

int div(int n1, int n2) {
    return n1 / n2;
}

int mod(int n1, int n2) {
    return n1 % n2;
}