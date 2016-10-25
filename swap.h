#pragma once
#include <iostream>

using namespace std;

//swaps the location of two elements in an array
void swap(int a*, int i, int j){
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}
