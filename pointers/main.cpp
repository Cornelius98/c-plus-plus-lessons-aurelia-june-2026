#include <iostream>

using namespace std;

int main()
{
    //Variable whose memory address will be saved
    int a = 10;

    //Pointer variable
    int* ptr = &a;

    //Print memory address
    cout << ptr << endl;

    return 0;
}
