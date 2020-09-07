#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Shape{
    public:
        Shape();
        Shape(int x, int y, string brush);

        int GetArea();
        double GetPerimeter();
        void Draw(int canvas_width, int canvas_height);

    protected:
        int x_, y_;
        string brush_;
};

class Square:public Shape{
    public:
        Square(int s, int x, int y, string brush);

        int GetArea();
        double GetPerimeter();
        void Draw(int canvas_width, int canvas_height);

    private:
        int s_;
};

class Rectangle:public Shape{
    public:
        Rectangle(int h, int w, int x, int y, string brush);

        int GetArea();
        double GetPerimeter();
        void Draw(int canvas_width, int canvas_height);

    private:
        int h_,w_;
};

class Diamond:public Shape{
    public:
        Diamond(int d, int x, int y, string brush);

        int GetArea();
        double GetPerimeter();
        void Draw(int canvas_width, int canvas_height);

    private:
        int d_;
};
