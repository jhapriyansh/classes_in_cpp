#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    // new operator
    int *p = new int(40);
    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    // delete operator
    delete[] arr;
    // frees up dynamically allocated memory block or a contiguous memory block.
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    return 0;
}