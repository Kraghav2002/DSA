#include<iostream>
using namespace std;

//FUNCTION TO GET THE LENGTH OF THE STRING 
//THE LENGTH OF THE STRING CAN BE CALCULATED BY RUNNING THE ARRAY TILL name[i] != '\0' <-- NULL CHARACTER.

int getLength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
        count ++;
    }
    return count;
}

int main(){

    char name[20];

    cout << "ENTER THE STRING " << endl;

    cin >> name;

    cout << "THE LENGTH OF THE STRING IS " << getLength(name) << endl;

    return 0;
}
