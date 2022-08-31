#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;

    int count = n;
    
    while(i <= n){
        int j = 1;
        while(j<=(n-i+1)){
            cout << j;
            j++;
        }
        int start = (i-1)*2;
        while(start){
            cout << "*";
            start--;
        }

        j = n-i+1;
        while(j>=1){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}