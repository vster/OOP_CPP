// ptrvoid.cpp
// ��������� �� void
#include <iostream>
using namespace std;

int main ( )
{
  int intvar;           // ������������� ����������
  float flovar;         // ������������ ����������

  int* ptrint;          // ��������� �� int
  float* ptrflo;        // ��������� �� float
  void* ptrvoid;        // ��������� �� void

  ptrint = &intvar;     // ��� �����: int* = int*
//ptrint = &flovar;     // ��� ������: int* = float*
//ptrflo = &intvar;     // ��� ������: float* = int*
  ptrflo = &flovar;     // ��� �����: float* = float*

  ptrvoid = &intvar;    // ��� �����: void* = int*
  ptrvoid = &flovar;    // ��� �����: void* = float*

  return 0;
}


