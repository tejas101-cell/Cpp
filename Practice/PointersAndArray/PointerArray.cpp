#include<iostream>

using namespace std;
int main(){
    int arr[] = {12,23,4,5,6};
    int *ptr = arr;

    // accessing value by actual array pointer
    cout << *(arr + 1) << endl;

    // ptr also acts as a pointer to the memory of that array
    cout << *(ptr + 1) << endl;

    // will give first element
    cout << *arr << endl;

    // will also give the same element from the array 
    cout << *ptr << endl;

    int arr1[][3] = {{12,3,4}, {1,2,3}};
    cout << *(*(arr1) + 1) << endl;

    void *ptr1;
    
    int a = 10;

    ptr1 = &a;

    // typecast the void pointer into the integer pointer and derefernce it
    cout << *((int*) ptr1) <<endl;

    int* ptr2;

    cout << *ptr2 << endl;

    int *ptr3 = 0;

    cout << *ptr3 << endl;
}
