#include<stdio.h>
int main() {
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    int i;
    while(i<=10){
        printf("%d * %d = %d\n", a,i,a*i);
    i++;
    }
return 0;
}