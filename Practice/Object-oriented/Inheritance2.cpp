#include<iostream>

using namespace std;

class Parent1{
    public:
    int a;

    Parent1(int a){
        this->a = a;
        cout << "Parent 1 is called" << endl;
    }

    virtual void display(){
        cout << a << endl;
    }
};

class Parent2{
    public:
    int b;

    Parent2(int b){
        this->b = b;
        cout << "Parent 2 is called" << endl;
    }

    virtual void display(){
        cout << b << endl;
    }
};
// whichever is the virtual constructor of it will be called first
class Child : public Parent1, virtual Parent2{
    public:
    Child(int a, int b) : Parent1(a), Parent2(b){ }
};  
int main(){
    Child c1(1,2);

    // due to ambiguity 
    c1.Parent1 :: display();
}