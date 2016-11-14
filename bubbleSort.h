#pragma once
#include <iostream>
#include "swap.h"
#include <time.h>

using namespace std;

//referenced from:
//http://www.sanfoundry.com/cpluscplus-program-implement-bubble-sort/
double bubbleSort(int *array, int size){
  double start = clock();
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size - i - 1; j++){
      if(array[j]>array[j+1]){
        swap(array, j, j+1);
      }
    }
  }
  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}
