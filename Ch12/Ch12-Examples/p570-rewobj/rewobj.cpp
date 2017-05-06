// rewobj.cpp
// �������� ����/����� �������� person
#include <fstream>           // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person                 // ����� person
  {
  protected:
    char name[40];           // ��� ��������
    int age;                 // ��� �������
  public:
    void getData(void)       // �������� ������
      {
      cout << "\n  Enter name: "; cin >> name;
      cout << "  Enter age: "; cin >> age;
      }
    void showData(void)      // ����� ������
      {
      cout << "\n  Name: " << name;
      cout << "\n  Age: " << age;
      }
    void diskIn(int);        // ������ �� �����
    void diskOut();          // ������ � ����
    static int diskCount();  // ����� ������� � �����
  };
//---------------------------------------------------------
void person::diskIn(int pn)  // ������ ������ � �����
                             // ������� pn �� �����
  {                   
  ifstream infile;           // ������� �����
  infile.open("PERSFILE.DAT", ios::binary);  // ������� ���
  infile.seekg( pn*sizeof(person) );         // �����
                                             // ��������� ���������
  infile.read( (char*)this, sizeof(*this) ); // ������ ������
                                             // �� ����� ��������
  }
//---------------------------------------------------------
void person::diskOut()       // ������ � ����� ����� 
  {
  ofstream outfile;          // ������� �����
                             // ������� ���
  outfile.open("PERSFILE.DAT", ios::app | ios::binary);
  outfile.write((char*)this,sizeof(*this)); //�������� � ����
  }
//---------------------------------------------------------
int person::diskCount()      // ����� ����� � �����
  {
  ifstream infile;
  infile.open("PERSFILE.DAT", ios::binary);
  infile.seekg(0, ios::end); // ������� �� ������� �0 ����
                             // �� ����� �����
                             // ��������� ���������� �����
  return (int)infile.tellg() / sizeof(person);
  }
///////////////////////////////////////////////////////////
int main()
  {
  person p;                  // ������� ������ ������
  char ch;
    
  do {                       // ���������� ������ �� ����
    cout << "Enter data about person: ";
    p.getData();             // �������� ������
    p.diskOut();             // �������� �� ����
    cout << "Continue (y/n)? ";
    cin >> ch;
    }  while(ch=='y');       // ���� �� 'n'
  
  int n = person::diskCount(); // ������� ����� � �����?
  cout << "In file " << n << " person(s)\n";
  for(int j=0; j<n; j++)       // ��� �������
    {
    cout << "\nPerson " << j; 
    p.diskIn(j);               // ������� � �����
    p.showData();              // ������� ������
    }
  cout << endl;
  return 0;
  }


