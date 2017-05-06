// empl_io.cpp
// �������� ����/����� �������� employee
// ��������� �������� ������������ ��������
#include <fstream>      // ��� ��������� �������� �������
#include <iostream>
#include <typeinfo>     // ��� typeid()
using namespace std;
#include <process.h>    // ��� exit()

const int LEN = 32;     // ������������ ����� �������
const int MAXEM = 100;  // ������������ ����� ����������

enum employee_type {tmanager, tscientist, tlaborer};
///////////////////////////////////////////////////////////
class employee                // ����� employee 
  {
  private:
    char name[LEN];           // ������� ���������
    unsigned long number;     // ����� ���������
    static int n;             // ������� ����� ����������
    static employee* arrap[]; //������ ���������� ��
                              // ����� ����������
  public:
    virtual void getdata()
      {
      cin.ignore(10, '\n');
      cout << "  Enter name: "; cin >> name;
      cout << "  Enter number: ";    cin >> number;
      }
    virtual void putdata()
      {
      cout << "\n  Name: " << name;
      cout << "\n  Number: " << number;
      }
    virtual employee_type get_type(); // �������� ���
    static void add();                // �������� ���������
    static void display();            // ������� ������ ��� ����
    static void read();               // ������ �� �����
    static void write();              // ������ � ����
  };
//---------------------------------------------------------
//����������� ����������
int employee::n;                  // ������� ����� ����������
employee* employee::arrap[MAXEM]; // ������ ���������� ��
                                  // ����� ����������
///////////////////////////////////////////////////////////
//����� manager (���������)
class manager : public employee
  {
  private:
    char title[LEN];  // ����� ("����-���������" � �. �.)
    double dues;      // ������ �����-�����
  public:
    void getdata()
      {
      employee::getdata();
      cout << "  Enter title: ";       cin >> title;
      cout << "  Enter golf-club dues: "; cin >> dues;
      }
    void putdata()
      {
      employee::putdata();
      cout << "\n  Title: " << title;
      cout << "\n  Golf-club dues: " << dues;
      }
  };
///////////////////////////////////////////////////////////
//����� scientist (������)
class scientist : public employee
  {
  private:
    int pubs;              // ����� ����������
  public:
    void getdata()
      {
      employee::getdata();
      cout << "  Enter amount of publications: "; cin >> pubs;
      }
    void putdata()
      {
      employee::putdata();
      cout << "\n  Amount of publications: " << pubs;
      }
  };
///////////////////////////////////////////////////////////
//����� laborer (�������)
class laborer : public employee
  {
  };
///////////////////////////////////////////////////////////
//�������� ��������� � ������ (�������� � ��)
void employee::add()
  {
  char ch;
  cout << "'m' for adding of manager"
        "\n's' for adding of scientist"
        "\n'l' for adding of laborer"
        "\nYour choice: ";
  cin >> ch;
  switch(ch)
    {          //������� ������ ���������� ����
    case 'm': arrap[n] = new manager;  break;
    case 's': arrap[n] = new scientist; break;
    case 'l': arrap[n] = new laborer;  break;
    default: cout << "\nUnknown type of employee\n"; return;
    }
  arrap[n++]->getdata();  //�������� ������ �� ������������
  }
//---------------------------------------------------------
//������� ������ ��� ���� ����������
void employee::display()
  {
  for(int j=0; j<n; j++)
    {
    cout  << (j+1);                // ������� �����
    switch( arrap[j]->get_type() ) //������� ��� 
      {
      case tmanager:  cout << ". Type: Manager";  break;
      case tscientist: cout << ". Type: Scintist"; break;
      case tlaborer:   cout << ". Type: Laborer";  break;
      default: cout << ". Unknown type";
      }
    arrap[j]->putdata();           // ����� ������
    cout << endl;
    }
  }
//---------------------------------------------------------
//������� ���� �������
employee_type employee::get_type()
  {
  if( typeid(*this) == typeid(manager) )
    return tmanager;
  else if( typeid(*this)==typeid(scientist) )
    return tscientist;
  else if( typeid(*this)==typeid(laborer) )
    return tlaborer;
  else
    { cerr << "\nIncorrect type of employee"; exit(1); }
  return tmanager;
  }
//---------------------------------------------------------
//�������� ��� �������, ���������� � ������, � ����
void employee::write()
  {
  int size;
  cout << "Run writing " << n << " employees.\n";
  ofstream ouf;           // ������� ofstream � �������� ����
  employee_type etype;   // ��� ������� ������� employee

  ouf.open("EMPLOY.DAT", ios::trunc | ios::binary);
  if(!ouf)
    { cout << "\nImpossible open file\n"; return; }
  for(int j=0; j<n; j++)  // ��� ������� �������
    {                     // �������� ��� ���
    etype = arrap[j]->get_type();
                          // �������� ������ � ����
    ouf.write( (char*)&etype, sizeof(etype) );
    switch(etype)         // find its size
      {
      case tmanager:  size=sizeof(manager); break;
      case tscientist: size=sizeof(scientist); break;
      case tlaborer:  size=sizeof(laborer); break;
      }      //������ ������� employee � ����    
	ouf.write( (char*)(arrap[j]), size );
    if(!ouf)
      { cout << "\nWriting to file is impossible\n"; return; }
    }
  }
//---------------------------------------------------------
//������ ���� ������ �� ����� � ������
void employee::read()
  {
  int size;               // ������ ������� employee 
  employee_type etype;    // ��� ���������
  ifstream inf;           // ������� ifstream � �������� ����
  inf.open("EMPLOY.DAT", ios::binary);
  if(!inf)
    { cout << "\nImpossible open file\n"; return; }
  n = 0;                  // � ������ ���������� ���
  while(true)
    {                     // ������ ���� ���������� ���������
    inf.read( (char*)&etype, sizeof(etype) );
    if( inf.eof() )       // ����� �� ����� �� EOF
      break;
    if(!inf)              // ������ ������ ����
      { cout << "\nImpossible reading of type\n"; return; }
    switch(etype)
      {                   // ������� ������ ���������
      case tmanager:      // ����������� ����
        arrap[n] = new manager;
        size=sizeof(manager);
        break;
      case tscientist:
        arrap[n] = new scientist;
        size=sizeof(scientist);
        break;
      case tlaborer:
        arrap[n] = new laborer;
        size=sizeof(laborer);
        break;
      default: cout << "\nUnknown type in file\n"; return;
      }                   // ������ ������ �� �����
    inf.read( (char*)arrap[n], size  );
    if(!inf)              // ������, �� �� EOF
      { cout << "\nReading from file is impossible\n"; return; }
    n++;                  // ������� ���������� ���������
    }  //end while
  cout << "Run reading " << n << " employees\n";
  }
///////////////////////////////////////////////////////////
int main()
  {
  char ch;
  while(true)
    {
    cout << "'a' - adding data about employee"
          "\n'd' - output data about all employees"
          "\n'w' - write all data to file"
          "\n'r' - read all data from file"
          "\n'x' - exit"
          "\nYour choice: ";
    cin >> ch;
    switch(ch)
      {
      case 'a':           // �������� ���������
        employee::add(); break;
      case 'd':           // ������� ��� ��������
        employee::display(); break;
      case 'w':           // ������ � ����
        employee::write(); break;
      case 'r':           // ������ ���� ������ �� �����
        employee::read(); break;
      case 'x': exit(0);  // �����
      default: cout << "\nUnknown command";
      }  //end switch
    }  //end while
  return 0;
  }  //end main()


