class Rectangle {
    public:
        Rectangle();
        Rectangle(int width, int height);
        int getArea();
        int getPerimeter();
    protected:
        int w, h, area, perimeter;
};

class Square:public Rectangle {
    public:
        Square(int width);
        void print();
};

class NonSquare:public Rectangle {
    public:
        NonSquare(int width, int height);
        void print();
};
