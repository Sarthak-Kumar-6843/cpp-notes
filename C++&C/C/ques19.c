#include <stdio.h>
int main(){
    for (int i =1; i <= 10; i++) {
        if (i == 6) {
            //skips 3
            continue;
        }
      printf("%d \n",i);
    }
    printf("end");
    return 0;
}