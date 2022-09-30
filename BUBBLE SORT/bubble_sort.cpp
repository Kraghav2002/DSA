#include<iostream>
using namespace std;

void bubblesort(int arr[] , int n){
    for(int i = 1 ; i < n ; i++){
        bool swapped = false;
        for(int j = 0 ;  j < (n-i) ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false){
            break;
        }
    }
}

int printarray(int array[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << array[i] << " ";
    }cout << endl;
}

int main(){

int arr[100];
int n;
cout << "ENTER THE NUMBER OF ELEMENTS IN THE ARRAY " << endl;
cin >> n;

for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
}

cout << "ARRAY BEFORE SORTING " << printarray(arr , n) << endl;
bubblesort(arr , n);
cout << "ARRAY AFTER SORTING "  << printarray(arr , n) << endl;

    return 0;
}
