#include<iostream>
#include<limits.h>

using namespace std;

int getmax(int arr[] , int n){

    int max = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[] , int n){

    int min = INT_MAX;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}


int main(){

    int size;
    cout << "ENTER THE SIZE OF THE ARRAY" << endl;
    cin >> size;

    int num[100];

    for(int i = 0 ; i < size ; i++ ){
        cin >> num[i];
    }


    cout << " THE MAXIMUM ELEMENT IN THE GIVEN ARRAY IS " << getmax(num , size) << endl;
    cout << " THE MINIMUM ELEMENT IN THE GIVEN ARRAY IS " << getmin(num , size) << endl;




    return 0;

}