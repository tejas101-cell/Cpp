#include<iostream>

using namespace std;

int main(){
    const int a = 10;
    // value at the address stored by ptr cannot be modified
    const int* ptr = &a; 

    int b = 5;
    ptr = &b;

    // even if you don't declare the b as const 
    // below will throw an error
    // *ptr = 8;

    int * nonConstptr = const_cast<int*>(ptr);

    *nonConstptr = 9;

    int const* ptr1 = &b;

        

    cout << *ptr1 << endl;
}
