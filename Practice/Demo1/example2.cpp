#include<iostream>

using namespace std;

int main(){
    cout << "Enter a number"<<endl;
    int num;
    cin >> num;

    if(num %2 == 0){
         cout << "Number is even";
    }else{
        cout << "Number is odd";
    }
    return 0;
}