#include <stdio.h>
void printSquare(int n);

int main(){
int n;
printf("enter n : ");
scanf("%d",&n);

printSquare(n);
    return 0;
}

void printSquare(int n){
    printf("%d \n",n*n);
}