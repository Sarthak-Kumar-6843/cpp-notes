#include <stdio.h>
int main () {

    int n;
    do {
    printf("enter n : ");
    scanf("%d",&n);

    if (n%7==0) {
      printf("%d is multiple of 7 \n ", n);
      break;
    }
    }while (1);



    printf("end \n");
return 0;
}