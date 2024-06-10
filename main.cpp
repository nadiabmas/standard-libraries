#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "RandomArrays.h"
#include "QSortTime.h"
#include "MySort.h"
#include "HashTable.h"
#include "PqSort.h"

using namespace std;


int main()
{
	RandomArrays* o_array = new RandomArrays();
	o_array->f_ranArray(1, 100, 1000); //random array that has numbers from 1 - 100 and has a size of 1000
	o_array->copyArray(); //copy previous array
    o_array->copyArray(); //twice

	QSortTime o_qSTime; 
	o_qSTime.f_qsort();// standard library qsort function
	
	MySort o_sort; 
	o_sort.sortArray(); //sort array from min to max 
	
	return 0;
}

