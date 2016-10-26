#pragma once
#include <iostream>
#include <time.h>
#include "swap.h"

using namespace std;

//reference used:
//http://www.sanfoundry.com/cpp-program-implement-heap-sort/
void max_heapify(int *a, int i, int n){
  int j, temp;
  temp = a[i];
  j = 2*i;
  while (j <= n){
    if (j < n && a[j+1] > a[j]) j = j+1;
    if (temp > a[j]) break;
    else if (temp <= a[j]){
      a[j/2] = a[j];
      j = 2*j;
    }
  }
  a[j/2] = temp;
  return;
}

void build_maxheap(int *a, int n){
  for(int i = n/2; i >= 1; i--){
    max_heapify(a, i, n);
  }
}


double heapsort(int *array, int size){
  double start = clock();

  cout << "heap\n";
  for (int i = size; i >= 2; i--){
    swap(array, i, 1);
    max_heapify(array, 1, i - 1);
  }
  printA(array, size);

  double end = clock();
  double total = (end - start) / CLOCKS_PER_SEC ;
  return total;
}
