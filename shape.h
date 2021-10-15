#ifndef STUDY_SHAPE_H
#define STUDY_SHAPE_H

class Shape {
private:
    int width;
    int height;
public:
    Shape(int w = 20, int h = 10);
    int getWidth();
    int getHeight();
    void print();
};

class Triangle : public Shape {
public:
    Triangle(int w, int h);
};

class Circle : public Shape {
public:
    Circle(int w, int h);
    void print();
};

#endif //STUDY_SHAPE_H
