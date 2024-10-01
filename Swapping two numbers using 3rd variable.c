#include<stdio.h>
int main() {
    int a = 56;
    int b = 89;
    int c = a;
    a = b;
    b = c;
    printf("value of a = %d\nvalue of b = %d", a,b);
return 0;
}