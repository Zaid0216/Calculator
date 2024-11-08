#include<stdio.h>
int main() {
    char operator;
    float n1, n2, result;

    printf("Enter a operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter 1st number: ");
    scanf("%f", &n1);

    printf("Enter 2st number: ");
    scanf("%f", &n2);

    switch(operator){
        case'+':
            result = n1 + n2;
            printf("%.2f + %.2f = %.2f", n1, n2, result);
            break;

        case'-':
            result = n1 - n2;
            printf("%.2f - %.2f = %.2f", n1, n2, result);
            break;

        case '*':
            result = n1 * n2;
            printf("%.2f * %.2f = %.2f", n1, n2, result);
            break;

        case '/':
            if(n2 != 0){
                 result = n1 / n2;
                 printf("%.2f / %.2f = %.2f", n1, n2, result);
             }
             else{
                printf("Cannot be divisible by 0");
             }
            break;

        default:
            printf("Enter a correct operatorr");
            break;
    }

    printf("Have a good day!\t\t");
    return 0;
}
