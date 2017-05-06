// xdist.cpp
// ���������� � ����� Distance
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance            //����� ���������� ��� ����������
  {
  private:
    int feet;
    float inches;
  public:
    class InchesEx { };   //����� ����������
//---------------------------------------------------------
    Distance()            //����������� (��� ����������)
      { feet = 0; inches = 0.0; }
//---------------------------------------------------------
    Distance(int ft, float in) //����������� (2 ���-��)
      {
      if(in >= 12.0)           //���� ����� ������� �������,
        throw InchesEx();      //������������ ����������
      feet = ft;
      inches = in;
      }
//---------------------------------------------------------
    void getdist()        //�������� ����� �� ������������
      {
      cout << "\nEnter feet: ";  cin >> feet;
      cout << "Enter inches: ";  cin >> inches;
      if(inches >= 12.0)  //���� ����� ������������,
        throw InchesEx(); //������������ ����������
      }
//---------------------------------------------------------
    void showdist()          //����� ����������
      { cout << feet << "\'-" << inches << '\"'; }
  };
///////////////////////////////////////////////////////////
int main()
  {
  try
    {
    Distance dist1(17, 3.5); //����������� (2 ���������)
    Distance dist2;          //����������� (��� ����������)
    dist2.getdist();         //�������� ����������
                             //������� ����������
    cout << "\ndist1 = ";  dist1.showdist();
    cout << "\ndist2 = ";  dist2.showdist();
    }
  catch(Distance::InchesEx)  //������� ����������
    {
    cout << "\nInit Error: "
      "inches value is more than limit.";
    }
  cout << endl;
  return 0;
  }


