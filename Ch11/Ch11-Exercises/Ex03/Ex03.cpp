// clarray.cpp
// ������� �����-������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Array                  //���������� ������� ������ C++ 
  {
  private:
    int* ptr;                //��������� �� ���������� Array
    int size;                //������ Array
  public:
	  Array():ptr(0),size(0)
	  {}
	  Array(int s)             //����������� � ����� ����������
      {
      size = s;              //�������� � ������ Array 
      ptr = new int[s];      //�������� ������ ��� Array 
      }
    Array(Array& a)
	{
		size = a.size;
		ptr = new int[size];
		for (int i = 0; i < size; i++)
			*(ptr+i) = *(a.ptr+i);
	};
	~Array()                 //����������
      { delete[] ptr; }
    int& operator [] (int j) //������������� ��������
                             //������ ��������
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
  const int ASIZE = 10;      //������ �������
  Array arr1(ASIZE);          //������� ������
  int j;

  for(int j=0; j<ASIZE; j++) //��������� ��� j^2
    arr1[j] = j*j;

  for(j=0; j<ASIZE; j++)     //������� ��� ����������
    cout << arr1[j] << ' ';
  cout << endl;
  
  Array arr2(arr1);

  for(j=0; j<ASIZE; j++)     //������� ��� ����������
    cout << arr2[j] << ' ';
  cout << endl;

  Array arr3, arr4;
  arr4 = arr3 = arr1;

  for(j=0; j<ASIZE; j++)     //������� ��� ����������
    cout << arr3[j] << ' ';
  cout << endl;

  for(j=0; j<ASIZE; j++)     //������� ��� ����������
    cout << arr4[j] << ' ';
  cout << endl;

   return 0;
  }