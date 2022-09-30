#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0 ; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int printarray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){

    int arr[100];
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS " << endl;
    cin >> n;

    for(int i=0 ;i<n ; i++){
        cin >> arr[i];
    }

    cout << "ARRAY BEFORE SORTING IS " << printarray(arr , n) << endl;
    insertion_sort(arr , n);
    cout << "ARRAY AFTER SORTING IS " << printarray(arr , n) << endl;

    return 0;
}
