// verylong.h
// ��������� ������ ������������ ����� �����
#include <iostream>
#include <string.h>            //��� strlen()� �. �.
#include <stdlib.h>            //��� ltoa()
using namespace std;

const int SZ = 1000;           //������������ ����� ��������

class verylong
  {
  private:
    char vlstr[SZ];            //����� ��� ������
    int vlen;                  //����� ������ verylong
    verylong multdigit(const int) const; //���������
    verylong mult10(const verylong) const;// �������
                                          // �������
  public:
    verylong() : vlen(0)       //����������� ��� ����������
      { vlstr[0]='\0'; }
    verylong(const char s[SZ]) //����������� (1 ��������)
      { strcpy(vlstr, s); vlen=strlen(s); } //��� ������
    verylong(const unsigned long n) //����������� (1 ���.)
      {                             //��� long int
      ltoa(n, vlstr, 10);           //��������� � ������
      strrev(vlstr);                //����������� ��
      vlen=strlen(vlstr);           //����� �����
      } 
    void putvl() const;              //������� �����
    void getvl();       //�������� ����� �� ������������
    verylong operator + (const verylong); //������� �����
    verylong operator * (const verylong); //��������
  };


