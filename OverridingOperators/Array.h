#pragma once
#include <iostream>
using namespace std;

class Array 
{
	friend ostream& operator<<(ostream&, const Array&);
	friend istream& operator>>(istream&, Array&);
private:
	int size;
	int* arr;
public:
	explicit Array(int = 10);
	Array(const Array&);
	~Array();
	int length() const;

	const Array& operator= (const Array&);

	bool operator==(const Array&) const;
	bool operator!=(const Array& a) const {
		return !(*this == a);
	}
	// Array[1]
	int& operator[](int);
	int operator[](int) const;


};