#include<iostream>
using namespace std;

char getmaxoccchar(string s){

    int arr[26] = {0};

    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int ans = 0;

    int maxi = 0;

    for(int i = 0 ; i < 26 ; i++){
        if(arr[i] > maxi){
            ans = i;
            maxi = arr[i];
        }
    }

    char answer = 'a' + ans;
    return answer;

}

int main(){

    string s;
    cout << "ENTER THE STRING" << endl;
    cin >> s;

    cout << "THE MAXIMUM OCCURRING CHARACTER IN THE GIVEN STRING IS " << getmaxoccchar(s) << endl;

    return 0;
}