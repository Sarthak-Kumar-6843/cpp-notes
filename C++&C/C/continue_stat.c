#include <stdio.h>
int main(){
    for (int i =1; i <= 5; i++) {
        if (i == 3) {
            printf("unlucky number \n");//skips 3
            continue;
        }
      printf("%d \n",i);
    }
    printf("end");
    return 0;
}