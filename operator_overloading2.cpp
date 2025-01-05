#include<iostream>
using namespace std;

class same
{
    int a,b;

    public:

    same(int x,int y)
    {
        a = x;
        b = y;
    }

    bool operator ==(same &obj)
    {
        return (a == obj.a && b == obj.b);
    }

};

int main()
{
    same obj1(1,2);
    same obj2(1,2);
    same obj3(4,3);

    if( obj1 == obj2)
    {
        cout<<"obj1 and obj2 are same"<<endl;
    }
    else cout<<"obj1 and obj2 are different"<<endl;

    if(obj1 == obj3)
    {
        cout<<"obj1 and obj3 are same"<<endl;
    }
    else cout<<"obj1 and obj3 are different"<<endl;

}