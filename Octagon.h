#ifndef OCTAGON_H 
#define OCTAGON_H 
#include <cstdlib> 
#include <iostream> 
#include "Figure.h"
using namespace std;

class Octagon : public Figure{ 
public: 
	Octagon(); 
	
	double Square(); 
	void Print();
	
private: 
	size_t x1; 
	size_t x2; 
	size_t x3;
	size_t x4; 
	size_t x5; 
	size_t x6;
	size_t x7; 
	size_t x8;
	size_t y1;
	size_t y2; 
	size_t y3;
	size_t y4; 
	size_t y5;
	size_t y6;
	size_t y7; 
	size_t y8;
	
}; 
#endif /* OCTAGON_H */
