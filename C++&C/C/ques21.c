#include <stdio.h>
int main(){
int n;
printf("enter n : ");
scanf("%d",&n);
int factorial = 1;
for (int i =1; i <= n; i ++) {
 factorial = factorial*i;

}
printf("factorial is %d ", factorial);
return 0;
}