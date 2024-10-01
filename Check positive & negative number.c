#include<stdio.h>
int main() {
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if(a<0){
        printf("You entered a Negative number !!!");
    }
    else {
        printf("\nYou entered a Positive number !!!");
    }
return 0;
}