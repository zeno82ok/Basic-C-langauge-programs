#include<stdio.h>
int main() {
char name[100];
int n;
printf("Enter something :");
scanf("%[^\n]", name);
printf("How many times would you like print ? :");
scanf("%d",&n);
for(int i = 1 ; i<=n ; i++){
    printf("%d . %s\n",i, name);
}     
return 0;
}