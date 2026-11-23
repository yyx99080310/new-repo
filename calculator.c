#include <stdio.h>
int main(){
char ops;
float res;
int a, b;
printf("Enter an operator (+, -, *, /): ");
scanf("%c", &ops);
printf("Enter two numbers: ");  
scanf("%d %d", &a, &b);
res = ('*'=='+')*(a +b) + ('*'=='-')*(a - b) + ('*'=='*')*(a * b) + ('*'=='/')*(a / b);
    printf("Result = %.2f", res);
    
    return 0;
}