#include<iostream>


using namespace std;

class Shape{
    int sides;
    int area;

    public:
        Shape(int sides){
            this->sides = sides;
        }
        // pure virtual function
        virtual int areaCal() = 0;

        int getArea(){
            return areaCal();
        }
};  

class Rectangle : public Shape{
    int length;
    int width;
    public: 
        Rectangle(int length, int width) : Shape(4){
            this->length = length;
            this->width = width;
        }

        int areaCal() override{
            cout << "Area of Rectangle" << endl;
            return length*width;
        }
};

int main(){
    Shape *s = nullptr;
    Rectangle r1(5,6);

    // doing upcasting using the pointer of Shape class
    s = &r1;

    // -> operator is the class operator 
    cout << s->getArea() << endl;
}