#include<iostream>

using namespace std;

int main(int argc, char*const argv[]){
    cout << "you have entered "<< argc << " arguments"<<endl;
    int i = 0;
    while (i < argc){
        // argv of i will give you pointer to the array memory storing the 
        cout << argv[i] << endl;
        i++;
    }
    char arr[] = {'a','b','c'};
    cout << arr << endl;
}