#include<iostream>
using namespace std;

int nTHterm(int n){
    int ans = (3 * n) + 7;
    return ans;
}

int main(){

    int a;
    cin >> a;
    int answer = nTHterm(a);
    cout << " ANSWER IS " << answer << endl;

    return 0;
    


}