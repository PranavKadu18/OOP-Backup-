#include<iostream>
using namespace std;

class addition
{
    public:

    int sum(int a,int b)
    {
        return a+b;
    }

    int sum(int a,int b,int c)
    {
        return a + b + c;
    }

    float sum(float a , float b)
    {
        return a + b;
    }
};

int main()
{
    addition obj;
    //cout<<obj.sum(12,4)<<endl;
    cout<<obj.sum(12,4,23)<<endl;
}
