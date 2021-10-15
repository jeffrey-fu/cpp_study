#include <iostream>
using namespace std;

class Person {
public:
    int age;
    Person(int &a): age(a) { cout << "Person::Person()" << endl; }
    ~Person() { cout << "Person::~Person()" << endl; }
};

int main() {
    int a = 20;
    int *p = &a;
    int &r = a;
    Person person(r);
    Person *person_pointer = (Person *)&person;
    cout << person_pointer->age << endl;
    cout << person_pointer << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    cout << r << endl;
    cout << &r << endl;
    return 0;
}