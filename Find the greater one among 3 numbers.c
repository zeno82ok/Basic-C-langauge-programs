#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    printf("Enter the value of c :");
    scanf("%d", &c);
    if(a>b && a>c) {
        printf("%d is greater than %d & %d", a,b,c);
    }
    else if(b>a && b>c){
        printf("%d is greater than %d & %d", b,a,c);
    }
    else {
        printf("%d is greater than %d & %d", c,a,b);
    }
return 0;
}