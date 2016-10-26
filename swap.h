#pragma once
#include <iostream>

using namespace std;

//swaps the location of two elements in an array
void swap(int* a, int i, int j){
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void printA(int* a, int size){
  cout << "Array printing:\n";
  for (int i = 0; i < size; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
