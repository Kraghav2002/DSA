#include<iostream>
using namespace std;

int firstocc(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastocc(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

int array[8] = {1,3,3,3,3,3,35,4};

cout << "THE FIRST OCCURENCE OF 3 IS AT INDEX " << firstocc(array , 8 , 3) << endl;
cout << "THE LAST OCCURENCE OF 3 IS AT INDEX " << lastocc(array , 8 , 3) << endl;

    return 0;
}