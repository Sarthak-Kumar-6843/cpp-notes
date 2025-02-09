#include <stdio.h>
int main(){
    char alpha;
    printf(" enter alpha : ");
    scanf("%c",&alpha);

    if (alpha >= 'a' && alpha <='z') {
        printf("lowercase \n");
    }else if (alpha >= 'A'&& alpha <='Z') {
        printf("uppercase");
    }else {
    printf("not valid");
    }

return 0;
}