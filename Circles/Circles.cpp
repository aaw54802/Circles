// Circles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//It computes the radius, circumference, and area given the coordinates of its midpoint and a point on its side.

#include <iostream>

const double pi = 3.1416;

using namespace std;

double calcRadius(double midpointX, double midpointY, double sideX, double sideY);
double calcDistance(double x1, double y1, double x2, double y2);
double calcCircumference(double radius);
double calcArea(double radius);

//Precondition: Gather(x1, y1) and (x2, y2) from Main Function
//Postcondition : It will send the points to calcDistance to calculate the radius then send it back to main.
double calcRadius(double midpointX, double midpointY, double sideX, double sideY)
{
    return calcDistance(midpointX, midpointY, sideX, sideY);
}

//Precondition: Gather(x1, y1) and (x2, y2) from CalcRadius
//Postcondition : Will calculate and send distance which is the radius back to main
double calcDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
}

//Precondition: Gather radius from main which the CalcRadius gave it.
//Postcondition : Sends the circumference(2πr) back to the main
double calcCircumference(double radius)
{
    return 2 * pi * radius;
}

//Precondition: Gather radius from main which the CalcRadius gave it.
//Postcondition : Sends the area(π(r ^ 2)) back to the main.
double calcArea(double radius)
{
    return pi * (radius * radius);
}

int main()
{
    double midpointX, midpointY, sideX, sideY;

    cout << "Enter the x-coordinate of the midpoint, the y-coordinate of the midpoint, the x-coordinate of the side, and the y-coordinate of the side: ";
    cin >> midpointX >> midpointY >> sideX >> sideY;

    double radius = calcRadius(midpointX, midpointY, sideX, sideY);

    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    cout << "Radius of the circle: " << radius << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0;
}