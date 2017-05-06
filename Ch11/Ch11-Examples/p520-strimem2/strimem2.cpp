// strimem2.cpp
// ����� String � ��������� ������
// ������������� �������� ������������ � ��������� this
#include <iostream>
#include <cstring>			 //��� strcpy() � �. �.
using namespace std;
///////////////////////////////////////////////////////////
class strCount		 //�����-������� ���������� �����
	{										private:
		int count;			//���������� �������
		char* str;			//��������� �� ������
		friend class String;  //������� ���� ����������
		//������ �������					
		strCount(char* s)		//����������� � ����� ����������
			{
			int length = strlen(s);  //����� ���������� 							 //���������
			str = new char[length+1]; //������ ������ 							  //��� ������
			strcpy(str, s);//���������� � ��� ���������
			count=1;	  //������� � �������
			}
//---------------------------------------------------------
		~strCount()				//����������
			{ delete[] str; }		//������� ������	  
	};
///////////////////////////////////////////////////////////
class String				 //����� String
	{
	private:
		strCount* psc;		 //��������� �� strCount
	public:
		String()		  //����������� ��� ����������
			{ psc = new strCount("NULL"); }
//---------------------------------------------------------
		String(char* s)	 //����������� � ����� ����������
			{ psc = new strCount(s); }
//---------------------------------------------------------
		String(String& S)	  //����������� �����������
			{	  
			cout << "\nCOPY CONSTRUCTOR";
			psc = S.psc;
			(psc->count)++;
			}
//---------------------------------------------------------
		~String()			 //����������
			{
			if(psc->count==1)  //���� ��������� 						 	 //������������,
				delete psc;	 //������� strCount
			else			//�����	
				(psc->count)--;//��������� �������
			}
//---------------------------------------------------------
		void display()		  //����� String
			{
			cout << psc->str;	 //������� ������
			cout << " (addr=" << psc << ")";  //�������  								    //�����
			}
//---------------------------------------------------------
		String& operator = (String& S)//���������� String
			{
			cout << "\nASSIGNMENT";
			if(psc->count==1)  //���� ��������� 						       //������������, 
				delete psc;	//������� strCount
			else			//�����
				(psc->count)--;//	��������� �������
			psc = S.psc; //������������ strCount 						 //���������
			(psc->count)++;	//��������� �������
			return *this;	//������� ���� ������
			}
	};
///////////////////////////////////////////////////////////
int main()
	{
	String s3 = "Muha po polu poshla, muha denejku nashla";
	cout << "\ns3="; s3.display();	//������� s3

	String s1,s2;		    //���������� ������� String
	s1 = s2 = s3;		//������������
							//������� ��
	cout << "\ns1="; s1.display();
	cout << "\ns2="; s2.display();
	cout << endl;	//������� ������� �������
	return 0;
	}


