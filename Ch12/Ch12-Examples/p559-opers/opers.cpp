// opers.cpp
// ���������� ������� � �����
#include <fstream>        // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // ����� person
  {
  protected:
    char name[80];        // ��� ��������
    short age;            // �������
  public:
    void getData()        // �������� ������ � ��������
      {
      cout << "Enter name: "; cin >> name;
      cout << "Enter age: "; cin >> age;
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  person pers;            // ������� ������
  pers.getData();         // �������� ������
                          // ������� ������ ofstream
  ofstream outfile("PERSON.DAT", ios::binary);
                          // �������� � ����
  outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));  
  return 0;
  }


