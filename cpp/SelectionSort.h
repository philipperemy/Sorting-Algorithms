#include "SortAlgorithm.h"

#pragma once
class SelectionSort : public SortAlgorithm
{
public:
	SelectionSort(void) {}

	virtual ~ SelectionSort(void) {}
	
	virtual void sort(double* input_array, const int size)
	{
		int min = 0;
		for(int i=0; i<size; i++)
		{
			min = i;
			for(int j=i+1; j<size; j++)
			{
				if(input_array[j]<input_array[min])
				{
					min = j;
				}
			}

			if(min != i)
			{
				double tmp = input_array[i];
				input_array[i] = input_array[min];
				input_array[min] = tmp;
			}

		}
	}

};