#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "SortAlgorithm.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;

int main(void)
{
	const int N = 100000;

	srand (time(static_cast<time_t>(NULL)));


	double * sorting_array = new double[N];

	cout << "initialize array";
	for(int i=0; i<N; i++)
	{
		sorting_array[i] = static_cast<double>(rand());
	}
	cout << " ... [OK]" << endl;


	SortAlgorithm * algo_sort = new InsertionSort();
	
	cout << "starting sort process";
	algo_sort->sort(sorting_array, N);
	cout << " ... [OK]" << endl;

	cout << "checking correctness";
	bool correctness = true;
	for(int i=0; i<=N-2; i++)
	{
		if(sorting_array[i] > sorting_array[i+1])
		{
			correctness = false;
			cout << "t[ " << i <<" ] = " << sorting_array[i] << endl;
			cout << "t[ " << i+1 <<" ] = " << sorting_array[i+1] << endl;

		}
	}

	if(correctness)
	{
		cout << "... [OK]" << endl;
	}
	else
	{
		cout << "... [KO] !!!" << endl;
		int b;
		cin >> b;
		for(int i=0; i<N; i++)
		{
			cout << sorting_array[i] << endl;
		}
	}
	

	delete(sorting_array);
	delete(algo_sort);

	int a;
	cin >> a;

	return 0;

}