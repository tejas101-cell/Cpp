#include<iostream>
using namespace std;
class Car{
    public:
    static int a;
    
    Car(){
        a++;
    }
};

class A{
    public:
    int name; 
    int Surname;

    A(){
        cout << "Grand parent is called" << endl;
    }
};
// without virtual ambiguity can be created (two copies of A will be creaed one for the Class B and on for the Class C)
class B : virtual public A{
    public:
    B(){
        cout << "Parent B is called" << endl;
    }
};
class C : virtual public A{
    public:
    C(){
        cout << "Parent C is called" << endl;
    }
};

class D : public B, public C{
    public:
    D(){
        cout << "Child D is called" << endl;
    }
};

class Parent{
    public:
    string name;
    string surname;
    public:
    Parent(string name, string surname){
        this->name = name;
        this->surname = surname;

        cout << "Parent constructor is called" << endl;
    }

    void display(){
        cout << name << " " << surname << endl;
    }
};

class Child : public Parent{
    public:
    Child(string name, string surname) : Parent(name, surname){
        cout << "Child constructor is called" << endl;
    }
};
int Car :: a = 0;
int main(){
    Car c; // c -> reference to the object car
    cout << c.a << endl;

    Car c1;
    cout << c1.a << endl;

    D d1; 

    d1.name = 1;

    Child ch1("Tejas", "Panchal");

    ch1.display();
}

