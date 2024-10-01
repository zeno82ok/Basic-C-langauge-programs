#include<stdio.h>
int main() {
    char new;
    printf("Enter any alphabate :");
    scanf("%c", &new);
    if(new <=122 && new>=97) {
        printf("Lower case");
    }
    else {
        printf("Upper case ");
    }
return 0;
}