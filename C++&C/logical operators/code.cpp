#include <iostream>
using namespace std;
int main(){
    cout << (3>1) <<endl ; //true
 //NOT OPERATOR
    cout << !(3>1) <<endl; //NOT LOGICAL-- FALSE
     
    // OR OPERATOR 
     
    cout <<( (3>1) || (5>3)  ) << endl;
           //  true    true--- true

    cout <<((3>1)||(3>5) ) << endl;
       //   true    false ---- true (in notes)
    
    cout <<((3<1)||(3>5)) << endl;
    //      false false --  false
     
     //AND OPERATOR
      
    cout <<((3>1)&&(5>3)) << endl;
    //      true   true ---true

    cout <<((3<1)&&(5<3)) << endl;
    //      false false  ---false

    cout <<((3>1)&&(5<3)) << endl;
    //      true  false --- false

    return 0;
}