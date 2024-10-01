#include<stdio.h>
int main() {
    int sum,n;
    sum = 0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i = 0; i<=n ; i++) {
        sum += i;
    }
    printf("Sum is %d", sum);
return 0;
}