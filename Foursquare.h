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
	
private: 
	size_t a; 
}; 
#endif /* FOURSQUARE_H */
