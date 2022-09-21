#include<iostream>
using namespace std;
int main(){

    int a ; 
    cout << "ENTER THE VALUE OF a" << endl;
    cin >> a;

    int b;
    cout << "ENTER THE VALUE OF b" << endl;
    cin >> b;

    char op;
    cout << "ENTER THE OPERATION YOU WANT TO EXECUTE" << endl;
    cin >>op;

    switch(op){

        case '+' : cout << (a+b) << endl;
        break;

        case '-' : cout << (a-b) << endl;
        break;

        case '*' : cout << (a*b) << endl;
        break;

        case '/' : cout << (a/b) << endl;
        break;

        default : cout << "PLEASE ENTER A VALID OPERATION" << endl;

    }


    return 0;
}