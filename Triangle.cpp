#include "Triangle.h" 
#include <iostream> 
#include <cmath> 
using namespace std;

Triangle::Triangle() {
    cout << "Enter the six coordinates: " << endl;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
}

double Triangle::Square() {
    double a = sqrt(double((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)));
    double b = sqrt(double((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2)));
    double c = sqrt(double((y1 - y3) * (y1 - y3) + (x1 - x3) * (x1 - x3)));
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::Print() {
	cout << "Coordinates A is " << x1 << " " << y1 << endl;
	cout << "Coordinates B is " << x2 << " " << y2 << endl;
	cout << "Coordinates C is " << x3 << " " << y3 << endl;
}

Triangle::~Triangle() {
    x1 = 0.0;
    y1 = 0.0;
    x2 = 0.0;
    y2 = 0.0;
    x3 = 0.0;
    y3 = 0.0;
}
