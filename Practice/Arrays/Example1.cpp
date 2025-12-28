#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    cout << sizeof(arr);
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if (i < 3)
        {
            arr[i] = i;       
        }
        cout << "->" << arr[i];
    }

    int arr1[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        cout << "->" << arr1[i];
    }
    cout << endl << "Enter elements in an array of size 5" << endl;
    for (int i = 0; i < sizeof(arr1)/sizeof(int); i++){
        cin >> arr1[i];
    }
    for (int i = 0; i < sizeof(arr1)/sizeof(int); i++) {
        cout << arr1[i] << endl;
    }
}