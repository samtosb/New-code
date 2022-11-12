#include<stdio.h>
#include<stdlib.h>

int main ()
{   

    double num1;
    double num2;
    char op;

    printf("\n====Welcome to Sammy Calculator====");

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);
    if(op == '+') {
        printf("%f", num1 + num2);
    }
    else if (op == '-') {
        printf("%f", num1 - num2);
    }
    else if (op == '/') {
        printf("%f", num1 / num2);
    }
    else if (op == '*') {
        printf("%f", num1 * num2);
    }

    else {
        printf("Invalided operator! try again❌");
    }

    return 0;
}
