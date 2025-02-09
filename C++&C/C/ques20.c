#include <stdio.h>
int main(){
    for (int i =5; i <= 50; i++) {
        if (i%2 != 0) {
        //skips 
            continue;
        }
      printf("%d \n",i);
    }
    printf("end");
    return 0;
}