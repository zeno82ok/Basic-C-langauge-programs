#include<stdio.h>
int main() {
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("\nYou entered a Even number !!!");
    }
    else {
        printf("\nYou entered a Odd number !!!");
    }
return 0;
}