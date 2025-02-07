#include <stdio.h>
int main(){
    int number;
    printf("enter the number : ");
    scanf("%d",&number);

    printf("%d \n", number%2 == 0);
    return 0;
}