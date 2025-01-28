//Q.sum from 1 to n
#include<iostream>
using namespace std;

int main() {
  int n=90;
  int sum = 0;

 
  for( int i = 1 ; i <= n ; i++){
  sum+=i;
  //for break the loop we use break
if (i == 5) {
   break;
}  
  }
cout << "sum = " << sum << endl;
return 0;
}