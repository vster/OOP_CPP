// englref.cpp
// ������������� ���������, ������������� ���������� new
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance
{
  private:
    int feet;
    float inches;
  public:
    void getdist ( ) // ��������� ����������
      {
		cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
      }
    void showdist ( ) // ����� ����������
      { cout << feet << "\'-" << inches << '\"'; }
};
///////////////////////////////////////////////////////////
int main ( )
{
  Distance& dist = *( new Distance ); // ������� ������ ���� Distance
  dist.getdist ( );                   // ������ � ������ ������ ������������ ����� �������� "."
  dist.showdist ( );
  cout << endl;

  return 0;
}


