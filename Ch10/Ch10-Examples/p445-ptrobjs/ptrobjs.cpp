// ptrobjs.cpp
// ������ ���������� �� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person // ����� �������
{
  private:
    char name [ 40 ];      // ��� ��������
  public:
    void setName ( )       // ��������� �����
      {
        cout << "Enter name: ";
        cin >> name;
      }
    void printName ( )     // ����� �����
      {
        cout << "\n  Name: " << name;
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  person* persPtr [ 100 ]; // ������ ����������
  int n = 0;               // ���������� ��������� � �������
  char choice;

  do
  {
    persPtr [ n ] = new person;       // ������� ����� ������
    persPtr [ n ]->setName ( );       // ������ ���
    n++;                              // ����������� ����������
    cout << "Continue (y/n)?"; // ����������, �������� �� ����
    cin >> choice;
  }
  while ( choice == 'y' );
  for ( int j = 0; j < n; j++ )
  {
    cout << "\nInfo about number " << j + 1;
    persPtr [ j ]->printName ( );
  }
  cout << endl;

  return 0;
}


