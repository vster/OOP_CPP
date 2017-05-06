// temlist2.cpp
// ������� ������ � �������������� �������
// ������, ������� �������� � ������� employee
#include <iostream>
using namespace std;

const int LEN = 80;       //������������ ����� ����
///////////////////////////////////////////////////////////
class employee            //����� employee
  {
  private:
    char name[LEN];       //��� ���������
    unsigned long number; //����� ���������
  public:
    friend istream& operator >> (istream& s, employee& e);
    friend ostream& operator << (ostream& s, employee& e);
  };
//---------------------------------------------------------
istream& operator >> (istream& s, employee& e)
  {
  cout << "\n  Enter name: "; cin >> e.name;
  cout << "  Enter number: ";    cin >> e.number;
  return s;
  }
//---------------------------------------------------------
ostream& operator << (ostream& s, employee& e)
  {
  cout << "\n  Name: " << e.name;
  cout << "\n  Number: " << e.number;
  return s;
  }
///////////////////////////////////////////////////////////
template<class TYPE>      //��������� "link<TYPE>"
struct link               //���� ������� ������
  {
  TYPE data;              //������� ������
  link* next;             //��������� �� ��������� ������
  };
///////////////////////////////////////////////////////////
template<class TYPE>      //����� "linklist<TYPE>"
class linklist            //������ ������
  {
  private:
    link<TYPE>* first;    //��������� �� ������ ������
  public:
    linklist()            //����������� ��� ����������
      { first = NULL; }   //������ ������ ���
    void additem(TYPE d); //�������� ������ (���� ������)
    void display();       //�������� ��� ������
  };
//---------------------------------------------------------
template<class TYPE>
void linklist<TYPE>::additem(TYPE d) //�������� ������
  {
  link<TYPE>* newlink=new link<TYPE>;//������� ����� ������
  newlink->data = d;                 //������ � ��� ������
  newlink->next = first;             //����������� �� ��������� ������
  first = newlink;  //������ ������ ������ ��������� �� ���
  }
//---------------------------------------------------------
template<class TYPE>
void linklist<TYPE>::display()  //����� ���� ������
  {
  link<TYPE>* current = first;  //���������� ��������� ��
                                //������ ������
  while( current != NULL )      //����� ����� ��������� ������
    {
    cout << endl << current->data; //������� ������
    current = current->next;       //������� �� ��������� ������
    }
  }
///////////////////////////////////////////////////////////
int main()
  {                          //lemp � ������ ������
  linklist<employee> lemp;   //"linklist<employee>"
  employee emptemp;          //��������� ��������� ��������
  char ans;                  //����� ������������ ('y' ��� 'n')

  do
    {
    cin >> emptemp;         //�������� ������ �� ������������
    lemp.additem(emptemp);  //�������� � emptemp
    cout << "\nContinue (y/n)? ";
    cin >> ans;
    } while(ans != 'n');    //��� ��������� ����� 
  lemp.display();           //������� ���� ������� ������
  cout << endl;
  return 0;
  }


