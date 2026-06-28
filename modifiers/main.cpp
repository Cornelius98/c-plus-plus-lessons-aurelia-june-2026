#include <iostream>

using namespace std;

class Car {
private:
    void privsteCar(){
        cout << "Private Method" << endl;
    }
public:
    void publicCar(){
        cout << "Public Method" << endl;
    }

protected:
    void protectedMember(){
        cout << "Protected Member" <<endl;
    }

};

class Person: protected Car {

};

int main()
{
    Person *object_1 = new Person();
    object_1->protectedMember();

    return 0;
}
