#include <iostream>
using namespace std;
/* TODO: Add all necessary functions and 
Overload the '+' sign to:
Add the lengths of the two shapes together
Add the widths of the two shapes together
Calculate and return the area of the new shape

For example: If there are two shapes s1 = 3x4 and s2 = 2x3
s1 + s2 = s3 where s3 has dimensions (3+2 = 5) *(4 + 3 = 7) = 5 x 7 = 35
 */
class Shape
{
private:
    int length; // Length of a box
    int width;

public:
    // Constructor definition
    Shape(int l = 2, int w = 2)
    {
        length = l;
        width = w;
    }
    double Area()
    {
        return length * width;
    }
/*     int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    } */

    int operator + (Shape sh2)
    {
        return (length + sh2.length) * (width + sh2.width);
        // Method 2:
        // return (length + sh2.getLength()) * (width + sh2.getWidth());
    }
};