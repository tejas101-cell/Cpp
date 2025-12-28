#include<iostream>

using namespace std;

// pass by reference
int add(int a, int b) {
    a++;
    b++;
    return a + b;
}
int main(){
    int a = 3, b = 5;
    cout << "Result : " << add(a, b) << endl;
    // here a and b remain as it it cus we are passing only values and not the memory occupied by individual variable
    cout << a << " " << b << endl;
    return 0;
}