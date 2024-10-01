#include<stdio.h>
int main() {
    int a,b;
    char c;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    printf("Enter any opertaor sign (+,-,*,/) :");
    scanf("%c", &c);
    switch (c) {
    case '+' :printf("SUM IS %d", a+b);
    break;
    case '-' :printf("SUB IS %d", &a-b);
    break;
    case '*' :printf("MULTIPLY IS %d",a*b);
    break;
    case '/' :printf("DIVISION IS %d", a/b);
    break;
    default: printf("Invalid");
        break;
    }
return 0;
}