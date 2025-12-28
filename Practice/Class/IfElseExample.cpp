#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter values for integers : " << endl;
    cin >> num1;
    cin >> num2;

    if(num1 > num2){
        cout << "Num1 is greater than num2";
    }
    else if(num1 < num2){
        cout << "Num2 is greater than num1";
    }
    else{
        cout << "Both are equal";
    }
}