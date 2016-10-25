#pragma once
#include <iostream>
#include <time.h>
#include "swap.h"

using namespace std;

double quicksort(int *array, int size){
  double start = clock();

  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}
