#include<iostream>

using namespace std;

typedef struct mySturct{
    string name;
    string surname;

    void display(){
        cout << name << " " << surname << endl;
    }
// s1 is the name of the stuct
}structure ;
int main(){
    // structure if the another name of the structure and s1 is the reference to the copy of stucture
    // you don't have to use sturct mystruct 
    structure s1;
    s1.name = "Tejas";
    s1.surname = "Panchal";
    s1.display();
}