#include <iostream>
using namespace std;

class Point; class Complex; // prototype for para
std::ostream& operator <<(std::ostream& out, const Point& p);
std::ostream& operator <<(std::ostream& out, const Complex& c);

template<typename T>
void Swap(T &a, T &b) { T temp = a; a = b; b = temp; }

class Point {
public:
    int x, y;
    Point(int xIn, int yIn) : x(xIn), y(yIn) {}

    Point& operator=(Point rhs) { // e.g. "T temp = a". a = para
        x = rhs.x; y = rhs.y;
        return *this;
    }
};

class Complex : public Point {
private:
    int &real, &imag;
public:
    //                                          child var = ref to base var
    Complex(int r, int i) : Point (r, i),       real (x), imag (y) {
      cout << "Forming..." << *this << std::endl; // << is overloaded
    }
    int getReal() const { return real; }
    int getImag() const { return imag; }
};

std::ostream& operator <<(std::ostream& out, const Point& p)
{
  out << "x:" << p.x << " ";
  out << "y:" << p.y << "\n";
  return out;
}

std::ostream& operator <<(std::ostream& out, const Complex& c)
{
  out << "x (real): " << c.getReal() << " ";
  out << "y (imag): " << c.getImag() << "\n";
  return out;
}

int main()
{
    Complex c1(15, 30), c2 (100, 200);

    // Use the Swap function to swap the Complex objects as Point types
    Point &p1 = c1, &p2 = c2; // tip: TREAT AS REFERENCE, not "class Point obj"
    Swap(p1, p2);

    /* Print the swapped objects as Point objects. */
    cout << "c1: (Point) " << p1 << "c2: " << p2 << std::endl;
    /* print the swapped objects as Complex objects. */
    cout << "c1: " << c1 << "c2: " << c2 << std::endl;
    return 0;
}
