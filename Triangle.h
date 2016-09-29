#ifndef TRIANGLE_H 
#define TRIANGLE_H 
#include <cstdlib> 
#include <iostream> 
#include "Figure.h"
using namespace std;

class Triangle : public Figure{ 
public: 
	Triangle(); 
	
	double Square(); 
	void Print();
	
private: 
	size_t x1; 
	size_t x2; 
	size_t x3;
	size_t y1; 
	size_t y2; 
	size_t y3;
}; 
#endif /* TRIANGLE_H */
