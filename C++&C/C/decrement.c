#include <stdio.h>
int main (){
    int i = 1;
     printf("%d \n", i--);//use then decrease -- post decrement
     printf("%d \n", i);

     int x = 1;
    printf("%d \n", --x);//decrease then use -- pre decrement
    printf("%d \n",x);
    return 0;
}