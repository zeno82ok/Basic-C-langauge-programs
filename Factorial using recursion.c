#include<stdio.h>
int Fact(int n);
int main() {
    int n;
    printf("Enter any number :");
    scanf("%d", &n);
    printf("%d", Fact(n));
return 0;
}
int Fact(int n) {
    if (n == 1)
    {
        return 1;
    }
    
    int Fact1 = Fact(n-1);
    int Fact2 = Fact1*n;
    return Fact2;
}