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
    Array(int s)             //����������� � ����� ����������
      {
      size = s;              //�������� � ������ Array 
      ptr = new int[s];      //�������� ������ ��� Array 
      }
    ~Array()                 //����������
      { delete[] ptr; }
    int& operator [] (int j) //������������� ��������
                             //������ ��������
      { return *(ptr+j); }
  };
///////////////////////////////////////////////////////////
int main()
  {
  const int ASIZE = 10;      //������ �������
  Array arr(ASIZE);          //������� ������
  int j;

  for(int j=0; j<ASIZE; j++) //��������� ��� j^2
    arr[j] = j*j;

  for(j=0; j<ASIZE; j++)     //������� ��� ����������
    cout << arr[j] << ' ';
  cout << endl;
  return 0;
  }


