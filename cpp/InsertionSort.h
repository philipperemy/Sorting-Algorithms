#include "SortAlgorithm.h"

#include <iostream>

#pragma once
class InsertionSort : public SortAlgorithm
{
public:
	InsertionSort(void) {}

	virtual ~ InsertionSort(void) {}
	
	virtual void sort(double* input_array, const int size)
	{
		double x = 0.0;
		for(int i=0; i<size; i++)
		{
			x = input_array[i];
			int j = i;
			while(j>0 && input_array[j-1]>x)
			{
				input_array[j] = input_array[j-1];
				j = j-1;
			}

			input_array[j] = x;
		}
	}

};