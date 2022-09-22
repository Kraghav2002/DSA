#include<iostream>
using namespace std;

void printarray(int ar[] , int n){
    for(int i = 0 ;i < n ; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void reverse(int ar[] , int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(ar[start] , ar[end]);
        start++;
        end--;
    }
}
int main(){

    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {9,8,7,6,4};

    reverse(arr , 6);
    reverse(brr , 5);

    printarray(arr , 6);
    printarray(brr , 5);

    return 0;

}