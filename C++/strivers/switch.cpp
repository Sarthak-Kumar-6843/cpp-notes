/*
take the day number and print the corresponding day
for 1 print monday
for 7 print sunday and so on
*/
#include <bits/stdc++.h>
using namespace std;
int main (){
int day;
cin >> day;

switch (day) {
    case 1:
           cout <<"monday";
        break;
    case 2:
            cout <<"tuesday";
            break;
    case 3:
            cout << " wednesday";
            break;
    case 4:
            cout <<"thursday";
            break;
    case 5:
            cout <<" friday";
            break;
    case 6:
            cout <<" saturday";
            break;
    case 7:
            cout <<"sunday";
            break;
            default:
            cout<<"invalid ";
}
cout << " check";

return 0;

}