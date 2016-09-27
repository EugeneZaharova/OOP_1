#include "Foursquare.h" 
#include <iostream> 
#include <cmath> 
using namespace std;

Foursquare::Foursquare() {
    cout << "Enter the eight coordinates: " << endl;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
}

double Foursquare::Square() {
    double a = sqrt(double((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)));
    double b = sqrt(double((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2)));
    double c = sqrt(double((y4 - y3) * (y4 - y3) + (x4 - x3) * (x4 - x3)));
    double d = sqrt(double((y1 - y4) * (y1 - y4) + (x1 - x4) * (x1 - x4)));
	double p = (a + b + c + d) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c) * (p - d));
}

void Foursquare::Print() {
	cout << "Coordinates A is " << x1 << " " << y1 << endl;
	cout << "Coordinates B is " << x2 << " " << y2 << endl;
	cout << "Coordinates C is " << x3 << " " << y3 << endl;
	cout << "Coordinates D is " << x4 << " " << y4 << endl;
}

Foursquare::~Foursquare() {
    x1 = 0.0;
    y1 = 0.0;
    x2 = 0.0;
    y2 = 0.0;
    x3 = 0.0;
    y3 = 0.0;
    x4 = 0.0;
    y4 = 0.0;
}
