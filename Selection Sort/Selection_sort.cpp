#include<iostream>
using namespace std;

void printarray(int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void selection_sort(int arr[], int n)
{   
    for(int i = 0 ; i < n ; i++){
        int minIndex = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}

int main(){
    int n;
    cin >> n;
    int array[1000];

    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
    }

    printarray(array , n);
    selection_sort(array , n);
    printarray(array , n);

    return 0;
}
