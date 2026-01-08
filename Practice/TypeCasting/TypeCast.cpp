#include <iostream>

using namespace std;

int main()
{
    float c;
    int a = 7, b = 2;
    // int to float implicit cast
    c = a;
    cout << c << endl;

    // static cast
    c = static_cast<float>(a / b);

    cout << fixed << c << endl;
}