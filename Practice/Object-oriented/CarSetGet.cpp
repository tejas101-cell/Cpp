#include<iostream>

using namespace std;
class Car{
    private:
    string brand;
    string model;
    int year;

    public: 
        void setCar(string brand, string model){
            this->brand = brand;
            this->model = model;
        }

        string getBrand(){
            return brand;
        }

        string getModel(){
            return model;
        }

        int square(int a){
            return a * a;
        }
        float square(float a){
            return a * a;
        }
};
int main(){
    Car c1, c2;
    c1.setCar("Maruti", "Dzire");
    c2.setCar("Toyota", "Innova");

    cout << c1.square(1.1) << endl; 

    cout << "Car 1 : " << c1.getBrand() << " "<< c1.getModel() << ", Car 2 : " << c2.getBrand() << " " << c2.getModel();
}