#pragma once
#include<string>
using namespace std;

class Canvas {
    public:
        Canvas(int row, int col);
        ~Canvas();

        void Resize(int w, int h);
        bool DrawPixel(int x, int y, char brush);
        void Print();
        void Clear();

    private:
        char** arr;
        int row_, col_;
};

class Shape {
    public:
        Shape(int x_, int y_, char brush_, string name_);
        virtual ~Shape();
        virtual void Draw(Canvas* canvas)=0;
        virtual void getData()=0;

    protected:
        int x, y;
        char brush;
        string name;
};

class Rectangle:public Shape {
    public:
        Rectangle(int x_, int y_, char brush_, int rect_w_, int rect_h_, string name_);
        ~Rectangle();
        void Draw(Canvas* canvas);
        void getData();

    private:
        int rect_w, rect_h;
};

class UpTriangle:public Shape {
    public: 
        UpTriangle(int x_, int y_, char brush_, int tri_h_, string name_);
        ~UpTriangle();
        void Draw(Canvas* canvas);
        void getData();

    private:
        int tri_h;
};

class DownTriangle:public Shape {
    public:
        DownTriangle(int x_, int y_, char brush_, int tri_h_, string name_);
        ~DownTriangle();
        void Draw(Canvas* canvas);
        void getData();

    private:
        int tri_h;
};

class Diamond:public Shape{
	public:
		Diamond(int x_, int y_, char brush, int dia_d_, string name_);
		~Diamond();
		void Draw(Canvas* canvas);
		void getData();

	private:
		int dia_d;
};
