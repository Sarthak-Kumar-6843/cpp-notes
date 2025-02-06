//sum of all the numbers from 1 to N which are divisible by 3.
#include <iostream>
using namespace std;
int main (){
    int total ;
    int n = 10;
    
    for (int i  =1 ;i <= n ; i++) {
    if (n%3 == 0) {
        total += i;
    }
    cout << total ;
    }
return 0;
}