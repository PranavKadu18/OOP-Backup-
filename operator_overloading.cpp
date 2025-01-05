#include<iostream>
using namespace std;

class complex
{
    double real,img;

    public:

    complex(double a,double b)
    {
        real = a;
        img = b;
    }

    complex operator +(complex &obj)
    {
        return complex(real + obj.real , img + obj.img);
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    complex a(12.3,14.5);
    complex b(2.3,4.5);

    complex c = a + b; //a through call hotay + ani b is passed as an argument so real and img he a cha ahe 

    c.display();
}