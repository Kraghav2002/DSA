#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;

    if(a-- > 0 && ++b > 2){
        cout << "STAGE 1 INSIDE IF ";
    }
    else{
        cout << "STAGE 2 INSIDE ELSE ";
    }
    cout << a << " " << b << endl;
}