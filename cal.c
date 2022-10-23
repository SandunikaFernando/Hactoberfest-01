#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char cha;
    double c, d;
    while (1) {
        printf("Enter an operator (+, -, *, /), if want to exit press x: ");
        scanf(" %c", &cha);
        // to exit
        if (cha == 'x')
            exit(0);
        printf("Enter two first and second operand: ");
        scanf("%lf %lf",&c,&d);
        // Using switch case we will differentiate
        // operations based on different operator
        switch (cha) {
        // For Addition
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", c, d, c + d);
            break;
        // For Subtraction
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", c, d, c - d);
            break;
        // For Multiplication
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", c, d, c * d);
            break;
        // For Division
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", c, d, c / d);
            break;
        // If operator doesn't match any case constant
        default:
            printf("Error! please write a valid operator\n");
        }
    }
}
