#include "SortAlgorithm.h"

#pragma once
class BubbleSort : public SortAlgorithm
{
public:
	BubbleSort(void) {}

	virtual ~ BubbleSort(void) {}
	
	virtual void sort(double* input_array, const int size)
	{
		bool swap = false;
		do
		{
			swap = false;
			for(int j=0; j<=size-2; j++)
			{
				if(input_array[j] > input_array[j+1])
				{
					swap = true;
					double tmp = input_array[j];
					input_array[j] = input_array[j+1];
					input_array[j+1] = tmp;
				}
			}

		} while(swap);
	}

};