#include<iostream>
using namespace std;

void counting(int n){
    for(int i = 0 ; i <= n ; i++){
        cout << i <<" ";
    }
    cout << endl;
}
int main(){
    int n ;
    cout << "ENTER THE VALUE OF n" <<  endl;
    cin >> n;

    counting(n);

}