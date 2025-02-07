#include <stdio.h>
int main (){
    printf("%d \n", 4>3 && 5>2);// - true -1
    printf("%d \n", 4>3 && 5<2);// true - false ----- 0 -false
    return 0;
}