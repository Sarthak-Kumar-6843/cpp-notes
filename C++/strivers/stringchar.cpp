#include <iostream>
using namespace std;
int main(){
string s = "sarthak";
int len = s.size();//to find the lenght
s[len - 1] = 'x';//to change the word 
cout << s[len -1];
return 0;
}