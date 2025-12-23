#include<iostream>

using namespace std;

int main(){
    int num;
    int product = 1;
    cout << "Enter a number for a factorial" << endl;
    cin >> num;
    while(num != 0){
        product *= num;
        num--;
    }
    cout << product<< endl;
}