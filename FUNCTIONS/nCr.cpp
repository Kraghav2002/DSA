#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 0 ; i <= n ; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n , int r){

    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    int answer = num/denom;

    return answer;

}

int main(){

    int a;
    int b;
    cout << "ENTER THE VALUE OF a" <<endl;
    cin >>a;
    cout << "ENTER THE VALUE OF b" << endl;
    cin >> b;
    int final_answer = nCr(a,b);
    cout << "ANSWER IS" << final_answer << endl;


    return 0;
}