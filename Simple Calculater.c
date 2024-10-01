#include<stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int a,b;
    char operation[50];
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    printf("\nWhat you want to do with this two operands ??\n\nEnter [SM] for SUM\nEnter [SB] for SUB \nEnter [M] for MULTIPLY \nEnter [D] for Divide \nEnter [PW] for Power | Format(a power b)\n\nEnter ?? :");
    scanf("%s", operation);
    if(strcmp(operation,"SM")==0){ 
        printf("Sum = %d", a+b);
    }
    else if(strcmp(operation ,"SB")==0){
        printf("Sub = %d", a-b);
    }
    else if(strcmp(operation,"M")==0){
        printf("Multiply = %d", a*b);
    }
    else if(strcmp(operation,"D")==0){
        printf("Divide = %d", a/b);
    }
        else if(strcmp(operation,"PW")==0){
            int c = pow(a,b);
        printf("Square = %d", c);
    }
    else {
        printf("Invalid!!!");
    }
return 0;
}