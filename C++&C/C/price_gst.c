#include <stdio.h>
void calculatePrice(float value);

int main(){
   float value = 100.0;
   printf("value is %f \n ", value);
   
   calculatePrice(value);

return 0;
}

void calculatePrice(float value){
    value = value + (0.18*value);
    printf("the final value : %f \n",value);
}
