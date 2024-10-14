#include <iostream>
#include "Point.h"
#include "Array.h"
using namespace std;

int main()
{
    int num;
    cin >> num;
    Array array1{ num };
    Array array2;

    for (int i{ 0 }; i < num; i++) 
    {
        array1[i] = i;
    }

    cout << array1;

    array1[3] = 61;
    cout << array1;

    cout << array1[3];


    //Point point{ 1, 2 };
    //Point newPoint{ 2, 3 };
    //Point altNewPoint{ 2 , 3 };
    //Point exampleCin;
    //point = point;
    //cout << point;

    //cin >> exampleCin;

    //cout << exampleCin;
    //newPoint++;
    //cout << newPoint;

    //cout << (newPoint == altNewPoint) << endl;

    //(point + newPoint).display();

    //(point * 10.0).display();

    //(point - newPoint).display();

    //(-point).display();

    //(++point).display();

    //(point++).display();

    //point.display();

    //(--point).display();




}
