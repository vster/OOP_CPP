#include <fstream>      // ��� �������� �������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class person            // ����� person
  {
  protected:
    char name[80];      // ��� ��������
	char otch[80];
	char family[80];
    int number;            // ��� �����
  public:
    void getData()      // �������� ������ � ��������
      {
      cout << "\n  Enter name: "; cin >> name;
	  cout << "  Enter otchestvo: "; cin >> otch;
	  cout << "  Enter family: "; cin >> family;
      cout << "  Enter number: "; cin >> number;
      }
    void showData()     // ����� ������ � ��������
      {
      cout << "\n  Name: " << name;
   	  cout << "\n  Otchestvo: " << otch;
	  cout << "\n  Family: " << family;
	  cout << "\n  Number: " << number;
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  char ch;
  person pers;          // ������� ������ person
  fstream file;         // ������� �������/�������� ����
                        // ������� ��� ��������
  file.open("GROUP.DAT", ios::app | ios::out |
                      ios::in | ios::binary );
  do                    // ������ �� ������������ � � ����
    {
    cout << "\nEnter data about person:";
    pers.getData();     // �������� ������
                        // �������� �� � ����
    file.write( reinterpret_cast<char*>(&pers), sizeof(pers) );
    cout << "Continue (y/n)? ";
    cin >> ch;
    } while(ch=='y');       // ����� �� 'n'

  file.seekg(0);        // ��������� ��������� �� ������ �����
                        // ������� ������ � ������ ��������
  file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
  while( !file.eof() )  // ����� �� EOF
    {
    cout << "\nPerson:"; //������� ������
    pers.showData();      //������� ������ � ���������
    file.read(reinterpret_cast<char*>(&pers),sizeof(pers));  
    }
  cout << endl;
  return 0;
  }

