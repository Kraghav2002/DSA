#include<iostream>
using namespace std;
int main(){
    int i = 2;
    int sum = 0;
    int n;
    cout << "enter the value of n : " << endl;
    cin >> n;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "THE SUM OF REQUIRED EVEN NUMBERS IS : " << sum << endl;
    return 0;
}