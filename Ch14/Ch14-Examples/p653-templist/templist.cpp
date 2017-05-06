// templist.cpp
// ������ ������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
template<class TYPE>      //��������� link<TYPE>
struct link               //������� ������
//( ������ ���� ��������� ����������� link �������� 
// link<TYPE> )
  {
  TYPE data;              //������� ������
  link* next;             //��������� �� ��������� �������
  };
///////////////////////////////////////////////////////////
template<class TYPE>      //����� linklist<TYPE>
class linklist            //������ ������
//(������ ����� ������ linklist �������� linklist<TYPE>)
  {
  private:
    link<TYPE>* first;    //��������� �� ������ ������
  public:
    linklist()            //����������� ��� ����������
      { first = NULL; }   //������ ������ ���
//����������: ����� ������� ��� ����������; ��� ��������� //��������, �� �������� ���  �����.
    void additem(TYPE d); //�������� ������ (���� ������)
    void display();       //������� ��� ������
  };
///////////////////////////////////////////////////////////
template<class TYPE>
void linklist<TYPE>::additem(TYPE d)    //���������� ������
  {
  link<TYPE>* newlink = new link<TYPE>; //������� �����
                                        // ������
  newlink->data = d;      //������� ���� ������
  newlink->next = first;  //�� ���� ������ �� ��������� �������
  first = newlink;        //������ ������ ������ ��������� ��
                          //������ ������
  }
//---------------------------------------------------------
template<class TYPE>
void linklist<TYPE>::display() //����� ���� ������
  {
  link<TYPE>* current = first; //��������� � �� ������ ������
  while( current != NULL )     //����� ����� ��������� ������
    {
    cout << endl << current->data; //������� �� �����
    current = current->next;       //���������� �� ��������� ������
    }
  }
//---------------------------------------------------------
int main()
  {
  linklist<double> ld;    //ld - ������ linklist<double>

  ld.additem(151.5);      //�������� ��� ����� double � ������ ld
  ld.additem(262.6);
  ld.additem(373.7);
  ld.display();           //������� ���� ������ ld

  linklist<char> lch;     //lch - ������ linklist<char>

  lch.additem('a');       //��� ������� (char) � � ������ lch
  lch.additem('b');
  lch.additem('c');
  lch.display();          //������� ���� ������ lch
  cout << endl;
  return 0;
  }


