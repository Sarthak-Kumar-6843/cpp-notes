#include <iostream>
using namespace std;

int main (){
int n = 4;
bool isPrime = true;

for (int i = 2; i*i <= n ; i ++){
   if (n%i == 0) {// non prime
   isPrime = false;
   break;
   }
}
if (isPrime == true) {
    cout << "prime\n";

}else {
cout << " non prime\n";

}
//isPrime -> true -> prime
//isPrime -> false -> non prime
return 0 ;

}