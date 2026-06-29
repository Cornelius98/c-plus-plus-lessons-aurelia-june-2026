#include <iostream>

using namespace std;

int main()
{
    //Constant using the `const` keyword
    const int CUSTOMER_AGE = 10;
    cout << "Constant using const: "<< CUSTOMER_AGE << endl;

    //Constant using the #define directive
    #define MY_AGE 30
    cout << "Constant using #define directive: " << MY_AGE << endl;
    return 0;
}
