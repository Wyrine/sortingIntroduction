#pragma once
#include <iostream>
#include <time.h>
#include "swap.h"

using namespace std;

//referenced from:
//http://codereview.stackexchange.com/questions/77782/quick-sort-implementation
void quick(int *array, int left, int right){
	int i = left, j = right;
	int pivot = array[(left + right) / 2];
	while (i <= j) {
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (i <= j) {
			swap(array, i, j);
			i++;
			j--;
		}
	};
	if (left < j)
		quick(array, left, j);
	if (i < right)
		quick(array, i, right);
}

double quicksort(int *array, int size){
  double start = clock();
  quick(array, 0, size-1);
  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}
