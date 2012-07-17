
// Arrays passed by reference to functions

#include <iostream>	
#include "Array.h"
using namespace std;

void DoubleElements(int x[], int Size)  // when arrays are passed to a function they are passed by reference
{
	for(int i=0; i<Size; i++)
	{
		x[i] *= 2;      //each element of the array is multiplied by two
	}
}

void PrintElements(int x[], int Size)
{
	for(int i=0; i<Size; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}

