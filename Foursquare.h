#ifndef FOURSQUARE_H 
#define FOURSQUARE_H 
#include <cstdlib> 
#include <iostream> 
#include "Figure.h"
using namespace std;

class Foursquare : public Figure{ 
public: 
	Foursquare(); 
	
	double Square(); 
	void Print();
	
	~Foursquare();
	
private: 
	size_t x1; 
	size_t x2; 
	size_t x3;
	size_t x4;
	size_t y1; 
	size_t y2; 
	size_t y3;
	size_t y4;
}; 
#endif /* FOURSQUARE_H */
