#include<stdio.h>
int main() {
    int a = 89;
    int b = 66;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Value of a = %d\nValue of b = %d", a,b);
return 0;
}