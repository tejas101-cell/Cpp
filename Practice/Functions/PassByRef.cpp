#include<iostream>

using namespace std;

// function prototype
int add(int*, int*);

int main(){
    int a = 5, b = 6;

    cout <<"Result : "<<  add(&a, &b) << endl;
    // value is getting changed
    cout << a << " " << b << endl;
    return 0;
} 

// funciton definition
int add (int* a, int* b){
    // adding paranthesis cuz ++ has more precedance than * dereferncing operator
    (*a)++;
    (*b)++;
    return (*a) + (*b);
}