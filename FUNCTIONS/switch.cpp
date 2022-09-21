#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "ENTER THE VALUE OF NUM" << endl;
    cin >> num;

    switch(num){
        case 1 : cout << "FIRST CASE EXECUTED" << endl;
        break;

        case 2 : cout << "SECOND CASE EXECUTED" << endl;
        break;

        default : cout << "THIS IS THE DEFAULT CASE" << endl;
        break;

    }
    return 0;
}