#include<iostream>

using namespace std;

class Complex{
    int real;
    int imag;

    public: 
    Complex(int real = 0, int imag = 0){
        this->real = real;
        this->imag = imag;
    }

    Complex operator+ (Complex c){
        Complex temp = c;
        temp.real = real + temp.real;
        temp.imag = imag + temp.imag;
        return temp;
    }

    void display(){
        cout << real << " + " << imag << "i" <<  endl;
    }   
    // we use & here to avoid more memory usage
    // unlike the example + operator overloading
    Complex operator*(Complex& c){
        Complex temp = c;
        temp.real = real * temp.real;
        temp.imag = imag * temp.imag;
        return temp;
    }

};
int main(){
    Complex c1(1,2), c2(2,3);

    // internally getting called like c1.operator+(c2);
    Complex res = c1 + c2;

    Complex resMul = c1 * c2;

    res.display();
    resMul.display();
}