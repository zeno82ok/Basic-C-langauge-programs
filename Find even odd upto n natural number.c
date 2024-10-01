#include<stdio.h>
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i = 1 ; i <=n ; i++){
        if(i%2==0){
            printf("%d is a even no.\n",i);
        }
        else{
            printf("%d is a odd no.\n", i);
        }
    }
return 0;
}