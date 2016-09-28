#include <cstdlib> 
#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "Foursquare.h" 
#include "Octagon.h"
using namespace std;

int main() { 
	Figure *trian = new Triangle(); 
	trian->Print(); 
	cout << trian->Square() << endl;
	delete trian;
	
	Figure *foursq = new Foursquare(); 
	foursq->Print(); 
	cout << foursq->Square() << endl;
	delete foursq;
	
	Figure *octag = new Octagon(); 
	octag->Print(); 
	cout << octag->Square() << endl;
	delete octag;
	return 0; 
}
