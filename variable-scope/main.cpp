#include <iostream>

using namespace std;

//Function prototype to test local scope
void testVariableScope();

//Globally scoped variable
int globally_scoped_age = 100;

int main()
{
    testVariableScope();
    cout << globally_scoped_age << endl;
    return 0;
}
void testVariableScope(){

    //Block scoped variable
    int locally_scoped_age = 85;
    cout << locally_scoped_age << endl;
}
