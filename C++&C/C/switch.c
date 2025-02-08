#include <stdio.h>
int main(){
    int day;
    printf("enter day(1 - 7) : ");
    scanf("%d",&day);
    
    switch (day) {
        case 1 : printf("monday \n");
        break;

        case 2 : printf("tuesday \n");
        break;

        case 3 : printf("wed \n");
        break;
    
        case 4 : printf("thurs \n");
        break;
    
        case 5 : printf("fri \n");
        break;
    
        case 6 : printf("sat \n");
        break;

        case 7 : printf("sun \n");
        break;

        default:printf("not valid ");
    }
return 0;
}