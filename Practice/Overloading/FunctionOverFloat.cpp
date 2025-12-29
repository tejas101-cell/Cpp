#include<iostream>

using namespace std;

// int mul(int a){
//     return a * a;
// }

int mul(float a){
   return a * a;
}
int main(){
    cout << mul(1) << endl;
    // this is showing an error cuz input argument is bydefault double
    // but we are acceprting the float therefore
    cout << mul(2.1) << endl;
}