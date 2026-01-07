#include<iostream>

using namespace std;
class A{
    public:
        virtual void fun(int x){
            cout << x << endl;
        }
};
class B : public A{
    public:
        void fun(int x) override{
            cout << "In the derived class" << endl;
        }
};

int main(){
    A* a;
    B b;
    a = &b;

    a->fun();
}