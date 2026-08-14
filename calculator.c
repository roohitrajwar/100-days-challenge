#include <stdio.h>

int main() {
    char operator;
    double num1,num2,result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operator);
    printf("enter the two operator");
    scanf("%lf %lf",&num1,&num2);
    switch (operator) { 
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;  
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;      
        case '/':
            if(num2 != 0){  
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            } else {
                printf("Error");}}
                    
 return 0;
} 
