// xdist2.cpp
// ���������� � �����������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class Distance            //����� ���������� ����������
  {
  private:
    int feet;
    float inches;
  public:
//---------------------------------------------------------
    class InchesEx        //����� ����������
       {
       public:
         string origin;   //��� ����� �������
         float iValue;    //��� �������� ����������
                          //��������

         InchesEx(string or, float in) //����������� �
                                       //����� �����������
           {
           origin = or;                //����������� ������
                                       //� ������ ��������� ������
           iValue = in;                //����������� ����������� 
                                       //�������� ������
           }
       };                              //����� ������ ����������
//---------------------------------------------------------
    Distance()                 //����������� (��� ����������)
      { feet = 0; inches = 0.0; }
//---------------------------------------------------------
    Distance(int ft, float in) //����������� (2 ���������)
      {
      if(in >= 12.0)
        throw InchesEx("Constructor with two args", in);
      feet = ft;
      inches = in;
      }
//---------------------------------------------------------
    void getdist()           //�������� ������ �� ������������
      {
      cout << "\nEnter feet: ";  cin >> feet;
      cout << "Enter inches: ";  cin >> inches;
      if(inches >= 12.0)
        throw InchesEx("function getdist()", inches);
      }
//---------------------------------------------------------
    void showdist()          //������� ����������
      { cout << feet << "\'-" << inches << '\"'; }
  };
///////////////////////////////////////////////////////////
int main()
  {
  try
    {
    Distance dist1(17, 3.5); //����������� � �����
                             //�����������
    Distance dist2;          //����������� ��� ����������
    dist2.getdist();         //�������� ��������
                             //������� ����������
    cout << "\ndist1 = ";  dist1.showdist();
    cout << "\ndist2 = ";  dist2.showdist();
    }
  catch(Distance::InchesEx ix)  //���������� ������
    {
    cout << "\nInit error. Origin: " << ix.origin
        << ".\n  Entered inches value " << ix.iValue
        << " is too big.";
    }
  cout << endl;
  return 0;
  }


