#include "SortAlgorithm.h"

#include <iostream>

#pragma once
class ShellSort : public SortAlgorithm
{
public:
	ShellSort(void) {}

	virtual ~ ShellSort(void) {}
	
	virtual void sort(double* input_array, const int size)
	{
		double tmp = 0.0;
		for(int j=0; j<size; j++)
		{
			for(int i=j; i<size; i++)
			{
				tmp = input_array[i];

			}
		}
	}

};