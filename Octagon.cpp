#include "Octagon.h" 
#include <iostream> 
#include <cmath> 
using namespace std;

Octagon::Octagon() {
    cout << "Enter the sixteen coordinates: " << endl;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
    cin >> x5;
    cin >> y5;
    cin >> x6;
    cin >> y6;
    cin >> x7;
    cin >> y7;
    cin >> x8;
    cin >> y8;
}

double Octagon::Square() {
    double a = sqrt(double((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)));
    double b = sqrt(double((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2)));
    double c = sqrt(double((y4 - y3) * (y4 - y3) + (x4 - x3) * (x4 - x3)));
    double d = sqrt(double((y5 - y4) * (y5 - y4) + (x5 - x4) * (x5 - x4)));
    double e = sqrt(double((y6 - y5) * (y6 - y5) + (x6 - x5) * (x6 - x5)));
    double f = sqrt(double((y7 - y6) * (y7 - y6) + (x7 - x6) * (x7 - x6)));
    double g = sqrt(double((y8 - y7) * (y8 - y7) + (x8 - x7) * (x8 - x7)));
    double h = sqrt(double((y1 - y8) * (y1 - y8) + (x1 - x8) * (x1 - x8)));
	double p = (a + b + c + d + e + f + g + h) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c) * (p - d) * (p - e) * (p - f) * (p - g) * (p - h));
}

void Octagon::Print() {
	cout << "Coordinates A is " << x1 << " " << y1 << endl;
	cout << "Coordinates B is " << x2 << " " << y2 << endl;
	cout << "Coordinates C is " << x3 << " " << y3 << endl;
	cout << "Coordinates D is " << x4 << " " << y4 << endl;
	cout << "Coordinates E is " << x5 << " " << y5 << endl;
	cout << "Coordinates F is " << x6 << " " << y6 << endl;
    cout << "Coordinates G is " << x7 << " " << y7 << endl;
	cout << "Coordinates H is " << x8 << " " << y8 << endl;
}

Octagon::~Octagon() {
    x1 = 0.0;
    y1 = 0.0;
    x2 = 0.0;
    y2 = 0.0;
    x3 = 0.0;
    y3 = 0.0;
    x4 = 0.0;
    y4 = 0.0;
    x5 = 0.0;
    y5 = 0.0;
    x6 = 0.0;
    y6 = 0.0;
    x7 = 0.0;
    y7 = 0.0;
    x8 = 0.0;
    y8 = 0.0;
}
