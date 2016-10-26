#pragma once
#include <iostream>
#include <time.h>
#include "swap.h"

using namespace std;


double insertionSort(int *array, int size){
  double start = clock();
  cout << "Insertion\n";
  for (int i = 1; i < size; i++) {
    int j = i;
    while (j > 0 && array[j - 1] > array[j]) {
      swap(array, j, j-1);
      j--;
    }
  }
  //printA(array, size);
  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}
