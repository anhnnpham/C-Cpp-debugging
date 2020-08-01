#include <iostream>
using namespace std;

class Point;
std::ostream& operator << (std::ostream& out, const Point& c);

class Point
{
public:
    Point(int xIn, int yIn) {
        x = xIn;
        y = yIn;
    }
    Point& operator=(Point rhs) { 
        x = rhs.x;
        y = rhs.y;
        return *this;
    }
    int x;
    int y;
};

template<typename T>
void Swap(T & a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    Point p1(5,5), p2(100, 100);
    Swap(p1, p2);
    
    cout << "p1: " << p1 << "p2: " << p2 << std::endl; // << overloaded
    return 0;
}

std::ostream& operator << (std::ostream& out, const Point& c) {
  out << "x:" << c.x << " ";
  out << "y:" << c.y << "\n";
  return out;
}