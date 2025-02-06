//Q. if the char is upper case or lowercase part 2

#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter char : ";
    cin >> ch;

    if( ch >= 65 && ch <= 90) {
        cout <<" uppercase \n";
    } else {
       cout << "lowercase \n";
    }

return 0;


}