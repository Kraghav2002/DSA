#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout << "ENTER THE VALUE OF n" << endl;
    cin >> n;
    while(i<=n){
        int j =1 ;
        while(j<=n){
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i++;
    }
return 0;
}