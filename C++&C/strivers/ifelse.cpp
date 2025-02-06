#include<bits/stdc++.h>
using namespace std;
//write a program that take input of age
//and tell if u r adult or not

int main(){
int age;

cout << "enter the age : ";
cin >> age ;
if (age >= 18) {
    cout << " adult ";

}else {
cout << " minor ";
}
return 0;

}