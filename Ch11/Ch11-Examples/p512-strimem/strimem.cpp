// strimem.cpp
// ����� String � ��������� ������
// ������������� �������� ������������ � ����������� 	      // �����������
#include <iostream>
#include <cstring>              // ��� strcpy() � �. �.
using namespace std;
///////////////////////////////////////////////////////////
class strCount                  // �����-������� ���������� �����
  {                    private:
    int count;                  // ���������� �������
    char* str;                  // ��������� �� ������
    friend class String;        // ������� ���� ����������
    //������ ������          
//---------------------------------------------------------
    strCount(char* s)           // ����������� � ����� ����������
      {
      int length = strlen(s);   // ����� ����������
                                // ���������
      str = new char[length+1]; // ������ ������
                                // ��� ������
      strcpy(str, s);           // ���������� � ��� ���������
      count=1;                  // ������� � �������
      }
//---------------------------------------------------------
    ~strCount()                 // ����������
      { delete[] str; }         // ������� ������
  };
///////////////////////////////////////////////////////////
class String                    // ����� String
  {
  private:
    strCount* psc;              // ��������� �� strCount
  public:
    String()                    // ����������� ��� ����������
      { psc = new strCount("NULL"); }
//---------------------------------------------------------
    String(char* s)             // ����������� � ����� ����������
      { psc = new strCount(s); }
//---------------------------------------------------------
    String(String& S)           // ����������� �����������
      {    
      psc = S.psc;
      (psc->count)++;
      }
//---------------------------------------------------------
    ~String()                   // ����������
      {
      if(psc->count==1)         // ���� ���������
                                // ������������,
        delete psc;             // ������� strCount
      else                      // �����  
        (psc->count)--;         // ��������� �������
      }
//---------------------------------------------------------
    void display()              // ����� String
      {
      cout << psc->str;         // ������� ������
      cout << " (addr=" << psc << ")";  // ������� �����
      }
//---------------------------------------------------------
    void operator = (String& S) // ���������� String
      {
      if(psc->count==1)         // ���� ���������
                                // ������������, 
        delete psc;             // ������� strCount
      else                      // �����
        (psc->count)--;         // ��������� �������
      psc = S.psc;              //������������ strCount
                                //���������
      (psc->count)++;           //��������� �������
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  String s3 = "This happend once before";
  cout << "\ns3="; s3.display(); //������� s3

  String s1;                     //���������� ������ String
  s1 = s3;                       //��������� ��� ������� �������
  cout << "\ns1="; s1.display(); //������� ���

  String s2(s3);                 //�������������
  cout << "\ns2="; s2.display(); //�������
                                 //������������������
  cout << endl;
  return 0;
  }


