// frengl.cpp
// ������������� ������������� �������� +
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance                //����� ���������� ����������
  {
  private:
    int feet;
    float inches;
  public:
    Distance()                //����������� ��� ����������
      { feet = 0; inches = 0.0; }
    Distance( float fltfeet ) //����������� (1 ���.)
      {    //��������� float � Distance
      feet = int(fltfeet);    //feet � ����� �����
      inches = 12*(fltfeet-feet); //����� - �����
      }
    Distance(int ft, float in)    //����������� (2 ���.)
      { feet = ft; inches = in; }
    void showdist()              //������� �����
      { cout << feet << "\'-" << inches << '\"';}
    friend Distance operator + (Distance, Distance); //�������������
  };
//---------------------------------------------------------

Distance operator + (Distance d1, Distance d2) // d1 + d2
  {
  int f = d1.feet + d2.feet;       //+ ����
  float i = d1.inches + d2.inches; //+ �����
  if(i >= 12.0)                    //���� ������ 12 ������,
    { i -= 12.0; f++;  }           //��������� �� 12 ������,
                                   //��������� 1 ���
  return Distance(f,i);            //����� ����� � ������
  }
//---------------------------------------------------------
int main()
  {
  Distance d1 = 2.5;         //����������� ���������
  Distance d2 = 1.25;        //float-feet � Distance
  Distance d3;
  cout << "\nd1 = "; d1.showdist(); 
  cout << "\nd2 = "; d2.showdist();

  d3 = d1 + 10.0;            //distance + float: OK
  cout << "\nd3 = "; d3.showdist();
  d3 = 10.0 + d1;            //float + Distance: OK
  cout << "\nd3 = "; d3.showdist();
  cout << endl;
  return 0;
  }


