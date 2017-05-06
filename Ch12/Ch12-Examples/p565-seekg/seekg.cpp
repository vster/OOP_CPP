// seekg.cpp
// ����� ����������� ������� � �����
#include <fstream>        // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // ����� person
  {
  protected:
    char name[80];        // ��� ��������
    int age;              // ��� �������
  public:
    void getData()        // �������� ������ � ��������
      {
      cout << "\n  Enter name: "; cin >> name;
      cout << "  Enter age: "; cin >> age;
      }
    void showData(void)   // ����� ������ � ��������
      {
      cout << "\n  Name: " << name;
      cout << "\n  Age: " << age;
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  person pers;                  // ������� ������ person 
  ifstream infile;              // ������� ������� ����
  infile.open("GROUP.DAT",ios::in|ios::binary); // �������
                                                // ����
  infile.seekg(0, ios::end);    // ���������� ��������� �� 0
                                // ���� �� ����� �����
  int endposition = infile.tellg();      // ����� �������
  int n = endposition / sizeof(person);  // ����� �������
  cout << "\nIn file " << n << " person(s)";

  cout << "\nEnter number of person: ";
  cin >> n;
  int position = (n-1) * sizeof(person); // �������� ������
                         // ������ ��� ������� �� ����� ������
  infile.seekg(position);               // ����� ���� �� ������
                         // ��������� ���� �������
  infile.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
  pers.showData();                      //������� ���� �������
  cout << endl;
  return 0;
  }


