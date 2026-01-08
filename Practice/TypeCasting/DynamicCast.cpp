#include<iostream>

using namespace std;

class base{
    public:
    
    virtual void base_method(){
        cout << "From base" << endl;
    }
};

class derived : public base{
    public:
    
    void derived_method(){
        cout << "From derived" << endl;
    }
};

int main(){
    base* b = new derived();
    b->base_method();

    derived* d = dynamic_cast<derived*>(b);
    d->base_method();
    d->derived_method();
}