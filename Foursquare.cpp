#include "Foursquare.h"
#include <iostream>
#include <cstdio> 
#include <cmath> 
using namespace std;

Foursquare::Foursquare() {
    cout << "Enter the side of foursquare: " << endl;
    cin >> a;
}

double Foursquare::Square() {
	return a * a;
}

void Foursquare::Print() {
	cout << "The side of foursquare is equal " << a << endl;
}
