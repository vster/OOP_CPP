// nofri.cpp
// ����������� ���������� ��������� �+�
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance             //����� ���������� ����������
{
    private:
      int feet;
      float inches;
    public:
      Distance() : feet(0), inches(0.0) //�����������
                                        // (��� ����������)
      {  }                              //����������� (1 ���.)
      Distance(float fltfeet)           //��������� float �
                                        //Distance
      {                                 //feet � ��� ����� �����
      feet = static_cast<int>(fltfeet);
        inches = 12*(fltfeet-feet);     //����� � �����
      }
    Distance(int ft, float in)         //����������� (2 ���.)
      { feet = ft; inches = in; }
    void showdist()                    //����� �� ����� ����������
      { cout << feet << "\'-" << inches << '\"'; }
    Distance operator + (Distance);
};
//---------------------------------------------------------
                    //��������� ���������� � d2
Distance Distance::operator + (Distance d2) //�����
{
    int f = feet + d2.feet;       //�������� ����
    float i = inches + d2.inches; //�������� �����
    if(i >= 12.0)                 //���� ����� ��������� 12.0,
      { i -= 12.0; f++;  }        //��������� �� 12 ������,
                                  //��������� 1 ���
    return Distance(f,i);         //����� Distance � ������
}
///////////////////////////////////////////////////////////
int main()
{
    Distance d1 = 2.5;           //����������� ���������
    Distance d2 = 1.25;          //feet ���� float � Distance
    Distance d3;
    cout << "\nd1 = "; d1.showdist();
    cout << "\nd2 = "; d2.showdist();

    d3 = d1 + 10.0;              //distance + float: OK
    cout << "\nd3 = "; d3.showdist();
// d3 = 10.0 + d1;              //float + Distance: ������
// cout << "\nd3 = "; d3.showdist();
    cout << endl;
    return 0;
}


