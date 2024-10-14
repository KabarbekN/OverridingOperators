#include "Point.h"
#include <iostream>
using namespace std;

Point::Point() : Point(0, 0) {}

Point::Point(double x, double y) : x{ x }, y{ y } {}

void Point::display() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

Point Point::operator+(const Point& point) {
    return Point(this->x + point.x, this->y + point.y);
} // 3 example

//Point Point::operator-() {
//    return Point(-(this->x), -(this->y));
//}

double Point::getX() const 
{
    return this->x;
}

double Point::getY() const
{
    return this->y;
}

//friend Point operator+(const Point& point1, const Point& point2) {
//    return Point(point1.x + point2.x, point1.y + point2.y);
//} // 2 example

//Point operator+(const Point& point1, const Point& point2) {
//    return Point(point1.x + point2.x, point1.y + point2.y);
//} // 1 example

static const Point add(const Point& point1, const Point& point2)
{
    return Point(point1.getX() + point2.getX(), point1.getY() + point2.getY());
}

static const Point subtract(const Point& point1, const Point& point2)
{
    return Point(point1.getX() - point2.getX(), point1.getY() - point2.getY());
}

const Point operator-(const Point& point1, const Point& point2) {
    return subtract(point1, point2);
}

static const Point mult(const Point& point, double value) 
{
    return Point(point.getX() * value, point.getY() * value);
}

const Point operator*(const Point& point, double value) 
{
    return mult(point, value);
}

Point operator*(double value, const Point& point)
{
    return mult(point, value);
}

static const Point divide(const Point& point, double value)
{
    return Point(point.getX() / value, point.getY() / value);
}

Point operator/(const Point& point, double value)
{
    return divide(point, value);
}

const Point operator+(const Point& point1, const Point& point2) {
    return add(point1, point2);
} // 2 example

Point Point::operator-() 
{
    return Point(-(this->x), -(this->y));
}

Point& Point::operator++()
{
    ++this->x; ++this->y; return *this;
}

Point& Point::operator--()
{
    --this->x; --this->y; return *this;
}

Point Point::operator++(int) 
{
    Point point{ this->x, this->y };
    ++(*this);
    return point;
}

Point Point::operator--(int)
{
    Point point{ this->x, this->y };
    --(*this);
    return point;
}

bool operator==(const Point& point1, const Point& point2) {
    return point1.getX() == point2.getX() && point1.getY() == point2.getY();
}

bool operator!=(const Point& point1, const Point& point2)
{
    return true; 
}
bool operator>(const Point& point1, const Point& point2) 
{
    return false;
}


ostream& operator<< (ostream& output, const Point& point) 
{
    output << "(" << point.getX() << ", " << point.getY() << ")" << endl;
    return output;
}
istream& operator>> (istream& input, Point& point) 
{
    input >> point.x;
    //input.ignore(1);
    input >> point.y;
    return input;
}


Point& Point::operator=(const Point& point) 
{
    if (this == &point) return *this;

    this->x = point.x;
    this->y = point.y;

    return *this;
}



//++point;