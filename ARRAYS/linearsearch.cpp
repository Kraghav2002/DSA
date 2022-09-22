#include<iostream>
using namespace std;

bool search(int ar[] , int n , int key){
    for(int i = 0 ; i < n ; i++){
        if(ar[i] == key){
            return 1;
        }

    }
    return 0;
}
int main(){

    int arr[10] = {15,65,68,97,41,2,58,48,64,12};
    int key;
    cout << "ENTER THE KEY TO BE SEARCHED" << endl;

    cin >> key;

    bool found = search(arr , 10 , key);

    if(found){
        cout << "THE ELEMENT IS PRESENT IN  THE GIVEN ARRAY" << endl;
    }
    else{
        cout << "THE ELEMENT IS ABSENT IN THE GIVEN ARRAY" << endl;

    }

    return 0;
}