#pragma once
class SortAlgorithm
{
public:
	
	virtual void sort(double* input_array, const int size) = 0;
	
	virtual ~SortAlgorithm() {}

protected:
	
	SortAlgorithm() {}


};

