#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter a numbers"<<endl;
    cin >> num1;
    cin >> num2;
    cout << endl;

    float result;
    result = num1+num2;
    cout << "Result : " << num1 << "+" << num2 << " = " << result << endl;
    result = (float) num1/num2;
    cout << "Result : " << num1 << "/" << num2 << " = " << result << endl;

    return 0;
}