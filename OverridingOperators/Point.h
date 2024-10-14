#pragma once
#include<iostream>
using namespace std;
class Point 
{
	double x;
	double y;
public:
	Point();
	Point(double x, double y);
	Point operator+(const Point& point);
	Point operator-();
	friend const Point operator-(const Point& point1, const Point& point2);
	friend const Point operator*(const Point& point, double value);
	friend const Point operator+(const Point& point1, const Point& point2);
	Point& operator++();
	Point& operator--();
	Point operator++(int);
	Point operator--(int);

	friend bool operator==(const Point& point1, const Point& point2);
	friend bool operator!=(const Point& point1, const Point& point2);
	friend bool operator>(const Point& point1, const Point& point2);

	friend ostream& operator<< (ostream& output, const Point& point);
	friend istream& operator>> (istream& input, Point& point);

	Point& operator= (const Point& point);

	double getX() const;
	double getY() const;

	void display() const;
};