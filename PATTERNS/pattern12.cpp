#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    char val = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << val;
            val = val + 1;
            j++;
        }
        cout << endl;
        i++;
    }
return 0;
}