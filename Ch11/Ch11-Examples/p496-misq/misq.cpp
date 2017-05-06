// misq.cpp
// ����� square() ��� Distance
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance			  //����� ���������� ����
	{
	private:
		int feet;
		float inches;
	public:			//����������� (��� ����������)
		Distance() : feet(0), inches(0.0)  
{  }							//constructor (two args)
	Distance(int ft, float in) : feet(ft), inches(in) 
			{  }
		void showdist()		 //�������� �����
			{ cout << feet << "\'-" << inches << '\"';}
		float square();		//������� �����
	};
//---------------------------------------------------------
float Distance::square()		//���������� �������
	{								//����������
	float fltfeet = feet + inches/12;	 //������� �� float
	float feetsqrd = fltfeet * fltfeet;  //���������� � //�������
	return feetsqrd;		//���������� ������� 
	}
///////////////////////////////////////////////////////////
int main()
	{
	Distance dist(3, 6.0);	//����������� � 2 ���. (3'-6")
	float sqft;

	sqft = dist.square();	//��������� ������� ����������
			 //�������� �����. � ������� �����. 
	cout << "\nDistance = "; dist.showdist();
	cout << "\nLength Square = " << sqft << " sq. feet\n";
	return 0;
	}


