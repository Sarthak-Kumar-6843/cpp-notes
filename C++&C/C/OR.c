#include <stdio.h>
int main(){
    printf("%d \n", 4<3 || 5<2 || 6<4 || 3<4);//only last is true
    printf("%d \n", 4<3 || 5<2 || 6<4 );//all fasle
    return 0;
}