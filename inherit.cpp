#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a): name(n), age(a) {}
    string getName() { return this->name; }
    void print() { cout << "My name: " << name << ", My age: " << age << endl; }
    void print(string x) { cout << x << endl; print(); }
};

class Student : public Person {
private:
    string school;
public:
    Student(string n, int a, string s): Person(n, a), school(s) {}
    void print() { cout << "My name: " << getName() << ", My school: " << school << endl; }
};

int main() {
    Student s("jeffrey", 30, "zju");
    // s.print("x"); error hidden
    s.print();
    s.Person::print("x");
}