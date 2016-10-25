#pragma once
#include <iostream>
#include <time.h>
#include "swap.h"

using namespace std;

double quicksort(int *array, int size){
  double start = clock();

  quick(array, 0, size-1);

  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}

//referenced from:
//http://codereview.stackexchange.com/questions/77782/quick-sort-implementation
void quick(int *array, int left, int right){
  int min = (left+right)/2;
  int i = left, j = right, pivot = array[min];

  while(left<j || right > j){
    while(array[i]<pivot) i++;
    while(array[j]<pivot) j++;
    if(i<=j){
      swap(array, i, j);
      i++;
      j--;
    }
    else{
      if(left < j) quick(array, left, j);
      if(right > j) quick(array, i, right);
      return;
    }
  }
}
