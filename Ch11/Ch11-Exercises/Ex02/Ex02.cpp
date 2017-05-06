// frengl.cpp
// ������������� ������������� �������� +
// ������������� ������������� �������� *
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
      feet = static_cast<int>(fltfeet);    //feet � ����� �����
      inches = 12*(fltfeet-feet); //����� - �����
      }
    Distance(int ft, float in)    //����������� (2 ���.)
      { feet = ft; inches = in; }
    void showdist()              //������� �����
      { cout << feet << "\'-" << inches << '\"';}
    friend Distance operator + (Distance, Distance); //�������������
    friend float operator * (Distance, Distance); //�������������
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
float operator * (Distance d1, Distance d2) // d1 * d2
  {
	  float fltfeet1 = d1.feet + d1.inches/12;
	  float fltfeet2 = d2.feet + d2.inches/12;
	  float feetsqrd = fltfeet1 * fltfeet2;
	  
	  return feetsqrd;            // ������������ 
  }
//---------------------------------------------------------
int main()
  {
  Distance d1 = 2.5;         //����������� ���������
  Distance d2 = 1.25;        //float-feet � Distance
  float sqd;
  cout << "\nd1 = "; d1.showdist(); 
  cout << "\nd2 = "; d2.showdist();

  sqd = d1 * d2;            //distance * distance: OK
  cout << "\nsqd = " << sqd << endl;
   return 0;
  }
