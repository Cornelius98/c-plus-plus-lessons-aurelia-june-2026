#include <iostream>

using namespace std;

int main()
{
    //Variable whose memory address will be saved
    int a = 20;

    //Pointer variable
    int *b = &a;

    //Print original value
    cout << "Original Value: " << *b << endl;


    //Modify original value
    *b = 200;

    //Print modified value
    cout << "Modified value: " << *b << endl;
    return 0;
}
