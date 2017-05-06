// englerr.cpp
// �������� ����� ������ ��� ������ ���������� ����������
#include <iostream>
#include <string>
#include <cstdlib>      // ��� atoi(), atof()
using namespace std;
int isFeet(string);     //����������
///////////////////////////////////////////////////////////
class Distance          // ����� ���������� ����������
  {
  private:
    int feet;
    float inches;
  public:
    Distance()                 // ����������� (��� ����������)
      { feet = 0; inches = 0.0; }
    Distance(int ft, float in) // ����������� (2 ���.)
      { feet = ft; inches = in; }
    void showdist()            // ����� ����������
      { cout << feet << "\'-" << inches << '\"';}
    void getdist();            // ��������� ����� 
                               // � ������������
	class FeetEx { };  
	class InchesEx { };
};
//---------------------------------------------------------
void Distance::getdist()    // ��������� ����� �� ������������
  {
  string instr;             // ��� ������� ������

  while(true)               // ����, ���� ���� 
                            // �� ����� �����������
    {
    cout << "\n\nEnter feet: ";
    cin.unsetf(ios::skipws);// �� ����������
                            // �����������
    cin >> instr;           // �������� ���� ��� ������
    if( isFeet(instr) )     // ���������� ��������?
      {        //��
      cin.ignore(10, '\n'); // ������ �������,
                            // ������� ����������� �����
      feet = atoi( instr.c_str() ); // ���������
                                    // �������� � �������������
      break;                // ����� �� ����� 'while'
      }                     // ���, �� �����
    cin.ignore(10, '\n');   // ������ �������, �������
                            // ����������� �����
    //cout << "Feet must be integer < 1000\n";
    throw FeetEx();
	}  //����� ����� while ��� �����

  while(true)               // ���� �������� ������
    {
    cout << "Enter inches: ";
    cin.unsetf(ios::skipws);// �� ����������
                            // �����������
    cin >> inches;          // �������� ����� (��� float)
    if(inches>=12.0 || inches<0.0)
      {
      // cout << "Inches must be between 0.0 and 11.99\n";
	  throw InchesEx();
      cin.clear(ios::failbit); //"������������"
                               //���������� ���� ������
      }
    if( cin.good() )        // ��� �� ������ � cin
      {  //(������ ������ �� �����)
      cin.ignore(10, '\n'); // ������ �����������
      break;              // ���� ����������, ����� �� 'while'
      }
    cin.clear();          // ������; �������� ������ ������
    cin.ignore(10, '\n'); // ������ ������� � ������������
	throw InchesEx();
    cout << "Wrong entered inches\n";  //������
    }  //����� while ��� ������
  }
//---------------------------------------------------------
int isFeet(string str)      // true ���� ������� ������
  {                         // � ���������� ��������� �����
  int slen = str.size();    // �������� �����
  if(slen==0 || slen > 5)   // �� ���� ��� ������� �����
                            // ������
    return 0;               // �� �����
  for(int j=0; j<slen; j++) // ��������� ������ ������
                            // ���� �� ����� ��� �����
  if((str[j] < '0' || str[j] > '9')&&str[j] != '-')
      return 0;             // ������ ������������ �����
  double n = atof( str.c_str() ); // ������� � double
  if( n<-999.0 || n>999.0 )  // ��� ���������� ��������?
    return 0;                // ���� ��, ������������ ����
  return 1;                  // ���������� ����
  }
///////////////////////////////////////////////////////////
int main()
  {
  Distance d;             //������� ������ Distance
  char ans;
  do
    {
		try
		{
			d.getdist();          // �������� ��� ��������
		}
		catch (Distance::FeetEx)
		{
			cout << "Feet must be integer < 1000\n";
		}
		catch (Distance::InchesEx)
		{
			cout << "Error in inches\n";
		}   
	cout << "\nLength = ";
    d.showdist();         // ������� ���
    cout << "\nOnce more (y/n)? ";
    cin >> ans;
    cin.ignore(10,'\n' ); // ������ ������� �
                          // �����������
    } while(ans != 'n');  // ���� �� 'n'
  return 0;
  }


