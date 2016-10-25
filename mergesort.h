#pragma once
#include <iostream>
#include <time.h>
#include "swap.h"

using namespace std;

//referenced from:
//http://www.sanfoundry.com/cpp-program-implement-merge-sort/
void merger(int *a, int low, int high, int mid, int size){
  int i, j, k, c[size];
  i = low;
  k = low;
  j = mid + 1;
  while (i <= mid && j <= high){
    if (a[i] < a[j]){
      c[k] = a[i];
      k++;
      i++;
    }
    else{
      c[k] = a[j];
      k++;
      j++;
    }
  }
  while (i <= mid){
    c[k] = a[i];
    k++;
    i++;
  }
  while (j <= high){
    c[k] = a[j];
    k++;
    j++;
  }
  for (i = low; i < k; i++){
    a[i] = c[i];
  }
}

void mergeS(int *a, int low, int high, int size){
  int mid;
  if (low < high){
    mid=(low+high)/2;
    mergeS(a,low,mid, size);
    mergeS(a,mid+1,high, size);
    merger(a,low,high,mid, size);
  }
}

double mergesort(int *array, int size){
  double start = clock();

  mergeS(a, 0, size-1, size);

  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}
