#include<iostream>

using namespace std;

class Car{
    private:
        int id;
        int chas_no;
    public: 
        Car(int id, int chas_no){
            this->id = id;
            this->chas_no = chas_no;
        }

        int display(){
            cout << "Id : " << id << " Chassis number : " << chas_no << endl;
        }
};
int main(){
    Car c1 = Car(12, 222);
    c1.display();
}