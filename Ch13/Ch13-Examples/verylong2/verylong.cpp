// verylong.cpp
// ���������� ��������� ������ ���� verylong
#include "verylong.h"        //������������ ���� ��� verylong
//---------------------------------------------------------
void verylong::putvl() const //����� �� ����� verylong
  {
  char temp[SZ];
  strcpy(temp,vlstr);        //������� �����
  cout << strrev(temp);      //����������� �����
  }                          //� ������� ��
//---------------------------------------------------------
void verylong::getvl()       //�������� ������������ ����� ��
                             //������������
  {
  cin >> vlstr;              //�������� ������ �� ������������
  vlen = strlen(vlstr);      //����� �� �����
  strrev(vlstr);             //����������� ��
  }
//---------------------------------------------------------
bool verylong::operator < (const verylong v)
{
	if (vlen < v.vlen)
		return true;
	else if (vlen > v.vlen)
		return false;
	else if (vlen == v.vlen)
	{
		for (int i = vlen-1; i >= 0; i--)
		{
			if ( vlstr[i] < v.vlstr[i] )
				return true;
			else if ( vlstr[i] > v.vlstr[i] )
				return false;
			else if ( vlstr[i] == v.vlstr[i] )
				continue;
		}
	}
	return false;
}

//---------------------------------------------------------
verylong verylong::operator + (const verylong v)
                             //��������
  {
  char temp[SZ];
  int j;
                             //����� ����� ������� �����
  int maxlen = (vlen > v.vlen) ? vlen : v.vlen;
  int carry = 0;             //���������� � 1, ���� ����� >= 10
  for(j = 0; j<maxlen; j++)  //� ��� ��� ������ �������
    {
    int d1 = (j > vlen-1)  ? 0 : vlstr[j]-'0';    //��������
                                                  //������
    int d2 = (j > v.vlen-1) ? 0 : v.vlstr[j]-'0'; //� ���
    int digitsum = d1 + d2 + carry;  //������� �������
    if( digitsum >= 10 )             //���� �������, ��
      { digitsum -= 10; carry=1; }   //��������� ����� �� 10
    else                     //���������� ������� � 1
      carry = 0;             //����� ������� = 0
    temp[j] = digitsum+'0';  //�������� ������ � ������
    }
  if(carry==1)               //���� ������� � �����,
    temp[j++] = '1';         //��������� ����� = 1
  temp[j] = '\0';            //��������� ������������ ������
  return verylong(temp);     //������� ��������� verylong
  }
//---------------------------------------------------------
verylong verylong::operator - (const verylong v)
                             //���������
  {
	verylong v1, v2;
	char temp[SZ];
	int j;
	bool minus;
	if ( this < v )
	{
		v1 = v;
		v2 = this;
		minus = true;
	}
	else
	{
		v1 = this;
		v2 = v;
		minus = false;
	}

                             //����� ����� ������� �����
  int maxlen = (v1.vlen > v2.vlen) ? v1.vlen : v2.vlen;
  int carry = 0;             //���������� � -1, ���� ������� < 0
  for(j = 0; j<maxlen; j++)  //� ��� ��� ������ �������
    {
    int d1 = (j > v1.vlen-1)  ? 0 : v1.vlstr[j]-'0';    //��������
                                                  //������
    int d2 = (j > v2.vlen-1) ? 0 : v2.vlstr[j]-'0'; //� ���

	int digitsum = d1 - d2 + carry;  //������� �������
    if( digitsum < 0 )             //���� �������, ��
      { digitsum += 10; carry=-1; }   //��������� ����� �� 10
    else                     //���������� ������� � 1
      carry = 0;             //����� ������� = 0
	temp[j] = digitsum+'0';  //�������� ������ � ������
    }
//  if(carry==1)               //���� ������� � �����,
//    temp[j++] = '1';         //��������� ����� = 1
  temp[j] = '\0';            //��������� ������������ ������
  return verylong(temp);     //������� ��������� verylong
  }
//---------------------------------------------------------
verylong verylong::operator * (const verylong v)//���������
  {                                             //������������ �����
  verylong pprod;            //������������ ������ �������
  verylong tempsum;          //������� �����
  for(int j=0; j<v.vlen; j++)//��� ������� ������� ���������
    {
    int digit = v.vlstr[j]-'0'; //�������� ������
    pprod = multdigit(digit);   //�������� ������� �� ����
    for(int k=0; k<j; k++)      //�������� ��������� ��
      pprod = mult10(pprod);    //  ������� 10-��
    tempsum = tempsum + pprod;  //��������� ������������ �
                                //������� �����
    }
  return tempsum;               //������� ���������� ������� �����
  }
//---------------------------------------------------------
verylong verylong::mult10(const verylong v) const //��������� ��������� 
                                                  //�� 10
  {                
  char temp[SZ];
  for(int j=v.vlen-1; j>=0; j--)//���������� �� ���� ������
    temp[j+1] = v.vlstr[j];     //����
  temp[0] = '0';                //�������� ����� ������� ������
  temp[v.vlen+1] = '\0';        //��������� ������������ ������
  return verylong(temp);        //������� ���������
  }
//---------------------------------------------------------
verylong verylong::multdigit(const int d2) const
  {                          //��������� ����� ��
  char temp[SZ];             //�������� (�����)
  int j, carry = 0;
  for(j = 0; j<vlen; j++)    //��� ������� �������
    {              //  � ���� ������������
    int d1 = vlstr[j]-'0';   //�������� �������� �������
    int digitprod = d1 * d2; //�������� �� �����
    digitprod += carry;      //�������� ������ �������
    if( digitprod >= 10 )    //���� ������ ����� �������,
      {
      carry = digitprod/10;  //�������� ��������� //�������� �������� �������
      digitprod -= carry*10; //���������� - ��������
      }
    else
      carry = 0;             //����� ������� = 0
    temp[j] = digitprod+'0'; //�������� ������ � ������
    }
  if(carry != 0)             //���� �� ����� �������,
    temp[j++] = carry+'0';   //��� ��������� ������
  temp[j] = '\0';            //��������� ������������
  return verylong(temp);     //������� ������������ �����
  }


