// employ.cpp
// ������ ��������� ���� ������ ����������� � �������������� ������������
#include <iostream>
using namespace std;
const int LEN = 80;       // ������������ ����� �����
///////////////////////////////////////////////////////////
class employee            // ����� ���������
{
  private:
    char name[ LEN ];     // ��� ����������
    unsigned long number; // ����� ����������
  public:
    void getdata ( )
      {
        cout << "\n  Enter name: "; cin >> name;
        cout << "  Enter number: ";     cin >> number;
      }
    void putdata ( ) const
      {
        cout << "\n  Name: " << name;
        cout << "\n  Number: " << number;
      }
};
///////////////////////////////////////////////////////////
class manager : public employee // ��������
{
  private:
    char title[ LEN ];    // ���������, �������� ����-���������
    double dues;          // ����� ������� � �����-����
  public:
    void getdata ( )
      {
        employee::getdata ( );
        cout << "  Enter title: "; cin >> title;
        cout << "  Enter sum of dues to golf-club: "; cin >> dues;
      }
    void putdata ( ) const
      {
        employee::putdata ( );
        cout << "\n  Title: " << title;
        cout << "\n  Sum of dues to golf-club: " << dues;
      }
};
///////////////////////////////////////////////////////////
class scientist : public employee // ������
{
  private:
    int pubs;                     // ���������� ����������
  public:
    void getdata ( )
      {
        employee::getdata ( );
        cout << "  Enter amount of publications: "; cin >> pubs;
      }
    void putdata ( ) const
      {
        employee::putdata ( );
        cout << "\n  Amount of publications: " << pubs;
      }
};
///////////////////////////////////////////////////////////
class laborer : public employee   // �������
{
};
///////////////////////////////////////////////////////////
int main ( )
{
  manager m1, m2;
  scientist s1;
  laborer l1;

  // ������ ���������� � ���������� �����������
  cout << endl;
  cout << "\nInfo input about 1st manager";
  m1.getdata ( );

  cout << "\nInfo input about 2nd manager";
  m2.getdata ( );

  cout << "\nInfo input about 1st scientist";
  s1.getdata ( );

  cout << "\nInfo input about 1st laborer";
  l1.getdata ( );

  // ������� ���������� ���������� �� �����
  cout << "\nInfo about 1st manager";
  m1.putdata ( );

  cout << "\nInfo about 2nd manager";
  m2.putdata ( );

  cout << "\nInfo about 1st scientis";
  s1.putdata ( );

  cout << "\nInfo about 1st laborer";
  l1.putdata ( );

  cout << endl;
  return 0;
}


