#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class RandomArrays
{
public:
	int minNum; // min number in the array
	int maxNum; // max number in the array
	int a_size; // size of the array

	RandomArrays(); // constructor 
	~RandomArrays(); // destructor

	int* a_ranArray = new int[a_size]; //define array

	int f_ranArray(int minNum, int maxNum, int a_size); // function to fill the array above with random numbers
	void copyArray(); // function to copy the values of the first array into another array

};
