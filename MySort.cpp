#include <iostream>
#include "MySort.h"

using namespace std;

void MySort::sortArray()
{
	int i, j;

	for (i = 0; i < 10; i++) {
		cout << a_Arr[i] << endl;
	}
	for ( i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++) // compare values
		{
			if (a_Arr[i] > a_Arr[j])
			{
				int in_order = a_Arr[i]; //rearrange values from min to max
				a_Arr[i] = a_Arr[j];
				a_Arr[j] = in_order;

				cout << in_order << endl; //print array in order
			}
		}
	}

	
}