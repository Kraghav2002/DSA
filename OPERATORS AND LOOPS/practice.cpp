#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=1;
    a=10;
    if(++a){
        cout << b;
    }
    else{
        cout << ++b;
    }
}