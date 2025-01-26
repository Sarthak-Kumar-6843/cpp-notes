#include<iostream>
using namespace std;
int main(){
    char grade = 'a'; //97-ascii value

    int value = grade;
    cout<< value << endl;


    //conversion-implicit

    double price = 100.999;

    int NewPrice = (int)price;
    cout << NewPrice <<endl;


    //casting--manually we put (int) here


    return 0;
    }