#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){

    int even[10] = {89,78,45,36,741,18,78,92,24,89};
    int odd[5] = {34,89,45,71,25};

    int evenIndex = binarySearch(even, 10, 741);

    cout << " Index of 741 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 45);

    cout << " Index of 45 is " << oddIndex << endl;

    return 0;
    
}