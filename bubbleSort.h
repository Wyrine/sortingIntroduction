#pragma once
#include <iostream>
#include "swap.h"
#include <time.h>

using namespace std;

//referenced from:
//http://www.thecrazyprogrammer.com/2011/11/c-program-to-sort-array-by-using-bubble.html
double bubbleSort(int *array, int size){
  double start = clock();
  cout << "bubble\n";
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size - i; j++){
      if(array[j]>array[j+1]){
        swap(array, j, j+1);
      }
    }
  }
  //printA(array, size);
  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}
