#include <iostream>
#include <cstdlib>   // preferred in C++


int main() {
    int* ptr = (int*) std :: malloc(sizeof(int));
    *ptr = 10;

    cout << *ptr << endl;

    free(ptr);
    return 0;
}
