#include<iostream>
using namespace std;

class shapes
{
    public:
    virtual void draw() = 0;
};

class rectangle : public shapes
{
    public:
    void draw()
    {
        cout<<"method to draw rectangle"<<endl;
    }
};

class circle : public shapes
{
    public:
    void draw()
    {
        cout<<"this is the method to draw a circle"<<endl;
    }
};

int main()
{
    rectangle a;
    a.draw();

}