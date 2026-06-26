#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;

    //Pointer variable (*- point to symbol) and (& - memory address symbol)
    int *ptr = &a;

    //Print memory address
    cout << ptr << endl;

    //Dereference the value and not memory address
    cout << *ptr << endl;


    return 0;
}
