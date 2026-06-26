#include <iostream>

using namespace std;

int main()
{
    //Variable whose memory address will be save
    int a = 10;

    //Pointer variable
    int *ptr = &a;

    //Dereference pointer value
    cout << *ptr << endl;
    return 0;
}
