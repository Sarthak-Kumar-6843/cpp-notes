#include <stdio.h>
int main (){
    int i = 1;
     printf("%d \n", i++);//first use then increse-- post increment operator
     printf("%d \n", i);

     int x = 1;
    printf("%d \n", ++x);//first increse then use--pre increment operator
    printf("%d \n",x);
    return 0;
}