#include<iostream>
using namespace std;

int arrsum(int arr[] , int n){
    int sum = 0;
    for(int i=0 ; i<n ;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){

    int size;
    cout << "ENTER THE SIZE OF THE ARRAY" << endl;
    cin >> size;

    int num[100];

    for(int i = 0 ; i < size ; i ++ ){
        cin >> num[i];
    }
 
    cout << "THE SUM OF THE ELEMENTS OF THE ARRAY IS " << arrsum(num , size) << endl;



    return 0;
}