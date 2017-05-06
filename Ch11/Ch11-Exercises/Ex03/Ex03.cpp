// clarray.cpp
// создает класс-массив
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Array                  //моделирует обычный массив C++ 
  {
  private:
    int* ptr;                //указатель на содержимое Array
    int size;                //размер Array
  public:
	  Array():ptr(0),size(0)
	  {}
	  Array(int s)             //конструктор с одним аргументом
      {
      size = s;              //аргумент – размер Array 
      ptr = new int[s];      //выделить память под Array 
      }
    Array(Array& a)
	{
		size = a.size;
		ptr = new int[size];
		for (int i = 0; i < size; i++)
			*(ptr+i) = *(a.ptr+i);
	};
	~Array()                 //деструктор
      { delete[] ptr; }
    int& operator [] (int j) //перегружаемая операция
                             //списка индексов
      { return *(ptr+j); }
	Array&operator = (Array& a)
	{
		delete [] ptr;

		size = a.size;
		ptr = new int[size];
		for (int i = 0; i < size; i++)
			*(ptr+i) = *(a.ptr+i);

		return *this;
	}
};
///////////////////////////////////////////////////////////
int main()
  {
  const int ASIZE = 10;      //размер массива
  Array arr1(ASIZE);          //создать массив
  int j;

  for(int j=0; j<ASIZE; j++) //заполнить его j^2
    arr1[j] = j*j;

  for(j=0; j<ASIZE; j++)     //вывести его содержимое
    cout << arr1[j] << ' ';
  cout << endl;
  
  Array arr2(arr1);

  for(j=0; j<ASIZE; j++)     //вывести его содержимое
    cout << arr2[j] << ' ';
  cout << endl;

  Array arr3, arr4;
  arr4 = arr3 = arr1;

  for(j=0; j<ASIZE; j++)     //вывести его содержимое
    cout << arr3[j] << ' ';
  cout << endl;

  for(j=0; j<ASIZE; j++)     //вывести его содержимое
    cout << arr4[j] << ' ';
  cout << endl;

   return 0;
  }