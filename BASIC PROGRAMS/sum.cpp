#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int sum = 0;
    int n;
    cout << "ENTER THE VALUE OF n : " << endl;
    cin >> n;
    while(i<=n){
        sum += i;
        i++;
    }
    cout << "THE SUM OF" << n << "NATURAL NUMBERS IS" << sum << endl;
return 0;
}