#include<iostream>

using namespace std;

// classes in c++ ends with ;
// you can do the outside class definition in c++
class Square{
    int l;
    int b;
    // making the function area as a public to make it accessibe 
    public:
    int area(int l, int b);
};
// outside class definition
// square :: area is just the name of the function 
int Square :: area(int l, int b){
    int area = l*b;
    return area;
}

int main(){
    // instantiation is done by using the class name only
    Square square;
    cout << "Area : "<< square.area(5,3);
}