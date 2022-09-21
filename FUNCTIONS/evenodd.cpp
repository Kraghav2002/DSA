#include<iostream>
using namespace std;

bool iseven(int n){
    if(n & 1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){

    int num;

    cout << "ENTER THE VALUE OF NUMBER" << endl;
    cin >> num;

    if(iseven(num)){
        cout << "THE NUMBER IS EVEN" << endl;
    }
    else{
        cout << "THE NUMBER IS ODD" << endl;
    }


    return 0;
}