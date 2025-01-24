#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is " << *(ptr); // dereference ptr

    // new operator
    int *p = new int(40);
    cout << "The value at adress p is " << *(p) << endl;
    float *q = new float(40.65);
    cout << "The value at adress p is " << *(q) << endl;

    // creating dynamically a array using new operator
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 30;
    arr[2] = 60;
    // delete operator
    // delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0] <<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    return 0;
}