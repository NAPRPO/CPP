
#include <iostream>
using namespace std;

class Ellipse {
    double a;
    double b;

protected:
    static constexpr const double pi = 3.1415926;
public:
    Ellipse (const double a, const double b ) : a(a), b(b) {}
    double getA         (void) const { return a;            }
    double getB         (void) const { return b;            }
    double area         (void) const { return pi*a*b;          }
    double perimeter    (void) const
    {
        double apb = a+b;
        double x;
        x=(a-b)/apb;
        x= 1.0 + 0.125*x*x;
        return pi*apb*x*x;
    }
};

ostream& operator << (ostream& out, Ellipse r)
{
    cout << "Ellipse: a = " << r.getA() << ", b = " << r.getB() << endl;
    cout << "           A = " << r.area() << ", p = " << r.perimeter() << endl;
    return out;
}

//-------------------------------------------------------------

class Circle : public Ellipse {
public:
    Circle (const double a) : Ellipse (a,a) {}
    };
ostream& operator << (ostream& out, Circle c)
{
    cout << "Circle: a = " << c.getA() <<endl;
    cout << "           A = " << c.area() << ", p = " << c.perimeter() <<endl;
    return out;
}
//----------------------------------------------------------------
int main()
{
   Ellipse e1(8.0, 2.0);
   Circle c1(4.0);
   cout << c1 << endl;
   cout << e1<<endl;
   return 0;

}

