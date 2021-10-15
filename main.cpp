#include <iostream>
#include "shape.h"
using namespace std;

Shape::Shape(int w, int h): width(w), height(h) {}
int Shape::getWidth() { return this->width; }
int Shape::getHeight() { return this->height; }

int main() {
    Shape s;
    Shape *spt = &s;
    cout << spt << endl;
    spt ++;
    cout << spt << endl;
    int a = 20;
    int * apt = &a;
    cout << "width: " << s.getWidth() << " height: " << s.getHeight() << endl;
    char *msg = "Hello";
    cout << *(msg+=4) << endl;
    return 0;
}
