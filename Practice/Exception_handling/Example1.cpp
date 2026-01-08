#include<iostream>

using namespace std;

int main(){
    try{
        int a, b;

        cin >> a;
        cin >> b;
        
        int c = a/b;

        char d = 'd';
        throw d;
    }catch(char c){
        cout << c << " is caught" << endl;
    }
    cout << "Program executed successfully" << endl;
}