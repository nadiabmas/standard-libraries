#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "RandomArrays.h"

using namespace std;

RandomArrays::RandomArrays() //constructor
{

}

RandomArrays::~RandomArrays() // destructor
{
	

}

int RandomArrays::f_ranArray(int minNum, int maxNum, int a_size)
{
	RandomArrays::a_ranArray;

	if (a_ranArray != NULL) {

		for (int i = 0; i < a_size; ++i) {
			srand(time(NULL));
			double range = (maxNum - minNum) + 1;
			a_ranArray[i] = minNum + (int) (rand() * range / (maxNum + 1)); //fill the array with random numbers 
		
			cout << a_ranArray[i] << endl;
		}

	}
	else {
		return NULL; // if an error occurs return null
	}

	delete[] a_ranArray; //delete array because we called new
}

void RandomArrays::copyArray()
{
	int* a_copy = new int[a_size]; //make a new array

	for (int i = 0; i < a_size; i++) //copy the elements of the first array
	{
		a_ranArray[i] = a_copy[i]; //paste them in the new array
	}
	cout << a_copy << endl; // print

	delete[] a_ranArray; //delete array after we're done
	delete[] a_copy; // delete array after we're done
}