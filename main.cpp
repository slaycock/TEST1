
// Arrays passed by reference to functions

#include <iostream>	
#include "Array.h"
using namespace std;

void main()
{
	int anArray[5] = {1,2,3,4,5}; 
	PrintElements(anArray, 5);   
	PrintElements(anArray, 5);
	DoubleElements(anArray, 5); 
	DoubleElements(anArray, 5); 
	DoubleElements(anArray, 5); 
	PrintElements(anArray, 5);
}