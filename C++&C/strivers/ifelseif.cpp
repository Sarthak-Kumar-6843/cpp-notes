#include<bits/stdc++.h>
using namespace std;
int main(){
int age;
cout << " enter age : ";
cin >> age;

if( age >= 18){
    cout << " adult ";

}
else if(age < 10){//this will only work if age is less than 10 das why if we put 15 it will not work
    cout << "minor";

}
return 0;


}