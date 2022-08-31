#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int b = 6;

    //AND OPERATOR
    cout << "a&b is " << (a&b) << endl;

    //OR OPERATOR 
    cout << "a|b is " << (a|b) << endl;

    //NOT OPERATOR
    cout << "~a is " << (~a) << endl;

    // XOR OPERATOR
    cout << "a^b is " << (a^b) << endl;

    //LEFT SHIFT OPERATOR
    cout << (17<<1) << endl;
    cout << (17<<2)  << endl;

    //RIGHT SHIFT OPERATOR
    cout << (19>>1) << endl;
    cout << (19>>2) << endl;

    cout << endl; 
    int i = 7;

    //POST-INCREMENT OPERATOR
     cout << (i++) << endl;

     //PRE-INCREMENT OPERATOR
     cout << (++i) << endl;

     //POST-DECREMENT OPERATOR
     cout << (i--) << endl;

     //PRE-DECREMENT OPERATOR
     cout << (--i) << endl;

    return 0; 

    }