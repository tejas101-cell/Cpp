#include<iostream>

using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
};
int main(){
    Car c1, c2;
    c1.brand = "Maruti";
    c1.model = "dzire";

    c2.brand = "Toyota";
    c2.model = "Innova";

    cout << "Car 1 : " << c1.brand << " "<< c1.model << ", Car 2 : " << c2.brand << " " << c2.model;
}