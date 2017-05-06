// vitrpers.cpp
// ����������� ������� � ����� person
#include <iostream>
using namespace std;
///////////////////////////////////////////////
class person                    //����� person
{
protected:
      char name[40];
public:
      void getName()
        { cout << "  Enter name: "; cin >> name; }
      void putName()
        { cout << "  Name: " << name << endl; }
      virtual void getData() = 0;      //������
      virtual bool isOutstanding() =0; //�����������
                                       //�������
};
////////////////////////////////////////////////
class student : public person   //����� student
{
private:
      float gpa;                //������� ����
public:
      void getData()            //��������� ������ �� ������� �
        {                       //������������
        person::getName();
        cout << "  GPA of the student:  "; cin >> gpa;
        }
      bool isOutstanding()
        { return (gpa > 3.5) ? true : false; }
};
////////////////////////////////////////////////
class professor : public person //����� professor
{
private:
	    int numPubs;              //����� ����������
public:
      void getData()            //��������� ������ � �������� �
        {                       //������������
        person::getName();
        cout << "  Number of publications:  "; cin >> numPubs;
        }
      bool isOutstanding()
        { return (numPubs > 100) ? true : false; }
};
////////////////////////////////////////////////
int main()
{
  person* persPtr[100];  //������ ���������� �� person
   int n = 0;            //����� �����, ��������� � ������ char choice;
	char choice;

  do {
    cout << " Student (s) or professor (p): ";
    cin >> choice;
    if(choice=='s' )               //������� ������ ������� 
      persPtr[n] = new student;   // � ������
    else                          //������� ������
      persPtr[n] = new professor; //�������� � ������
    persPtr[n++]->getData();       //������ ������ � �������
    cout << " One more person (y/n)? "; //������� ���
                                           //�������
    cin >> choice;
    } while( choice=='y' );       //����, ���� ����� 'y'
  
  for( int j=0; j<n; j++)
    {
    persPtr[j]->putName();        //������� ��� �����,
    if( persPtr[j]->isOutstanding() )        //�������� � 
      cout << "  This is the outstanding person!\n"; //����������
    }
  return 0;
}                      //����� main()


