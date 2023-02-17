#include <iostream>
using namespace std;

class point
{
    int a, b;
    float c;

public:
    // point(){} /*during dynamic initialization of objects using constructors it should be written otherwise it will throw error because compiler does not recognize which function should be used;*/
    point(int p = 0, int q = 0)
    {
        a = p;
        b = q;
    }
    point(int p, float q)
    {
        a = p;
        c = q;
    }
    // when no copy constructor is present then compiler invokes its own copy instructor
    // point(point &r)
    // {
    //     a = r.b;
    //     b = r.a;
    // }
    void print()
    {
        cout << "The x and point coordinates are " << a << " " << b << endl;
    }
};

int main()
{
    int i = 23, j = 12;

    point y;
    y.print();

    // point x = point(i,j);

    point x(i,j);
    x.print();

    // copy constructor is invoked when you declare an object.It is not invoked when  object is already declared
    //    point z = point(x); Throw error because copy constructor can't be invoked during dynamic initialization
    //   point z = x; copy instructor invoked
    //    z=x; copy instructor not invoked
    point z(x); // copy instructor invoked
    z.print();

    return 0;
}