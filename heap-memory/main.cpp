#include <iostream>

using namespace std;

class Person {
public:
    int age = 10;
    Person(int a){
        cout << a << endl;
    }
    void talk(){
        cout << "I am talking" << endl;
    }
};

int main()
{
    int a = 10;
    int* b = new int(100);
    cout << *b << endl;


    Person *aurelia = new Person(100);
    aurelia->talk();


    return 0;
}
