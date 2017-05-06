// find.cpp
// найти первый объект, значение которого равно данному
#include <iostream>
#include <algorithm>            //для find()
using namespace std;

int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };

int main()
  {
  int* ptr;
  ptr = find(arr, arr+8, 33);   //найти первое вхождение 33
  cout << "First object with value 33 found in position "
      << (ptr-arr) << endl;
  return 0;
  }


