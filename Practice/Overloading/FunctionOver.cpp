#include<iostream>

using namespace std;

int mul(int a, int b, int c){
    return a*b*c;
}

int mul(int a){
    cout << "no default is called" << endl;
    return a * a;
}
int mul(int a, int b = 9){
    cout << "default is called" << endl;
    return a * b;
}
int main(){
    int a = 1, b = 2, c = 3;
    // cout << "Three parameters: "<< mul(a, b, c) << endl;
    cout << "Two parameters: "<< mul(a, b) << endl;

    // this will print the int only 
    // result is storing in and you store int with float (same size)
    float result = a/b;
    cout << result << endl;

    float d = 5;
    // this will print the float cuz float/int is float
    result = a/d;
    cout << result << endl;

    cout << mul(a);
}