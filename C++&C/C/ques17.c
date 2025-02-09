#include <stdio.h>
int main(){
    int n;
    do { 
        printf("enter n : ");
        scanf("%d",&n);
        
        if (n%2 != 0) {
            printf(" %d is odd \n",n);
        break;
        
        }
    }
    while (1);//true - 1


    printf("end");
    return 0;
}
