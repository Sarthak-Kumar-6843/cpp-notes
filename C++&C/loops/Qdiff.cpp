//  Q - Sum of no. from 1 to N
#include <iostream>
using namespace std;

int main(){
 int n = 60;
 int evenSum = 0;

 for (int i = 1; i <= n ; i++) {
 if (i%2 == 0) {
 evenSum+=i;
 }
 }
cout << "evenSum = "<<evenSum << " " <<endl;
return 0;


}