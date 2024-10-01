#include<stdio.h>
int main() {
        float a;
        printf("Enter the temperature in Celcius :");
        scanf("%f", &a);
        printf("In fahrenheit = %0.1f", (a*9/5)+32);
        return 0;
}