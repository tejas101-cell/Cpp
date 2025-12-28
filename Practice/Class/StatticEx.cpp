#include<iostream>

using namespace std;

class StaticExample{
    private:
        static int i;
        int b;
    public:
        int increment(){
            i++;
            // b++;
        }
        void printInd(){
            cout << i << endl;
            cout << b << endl;
        }
};
int StaticExample :: i = 0;

int main(){
    StaticExample se1;
    se1.increment();
    se1.printInd();

    StaticExample se2;
    se2.increment();
    se2.printInd();

    StaticExample se3;
    se3.increment();
    se3.printInd();
}