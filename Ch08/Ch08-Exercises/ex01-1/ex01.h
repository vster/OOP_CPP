///////////////////////////////////////////////////////////
class Distance  // ����� ���������� ��� �����
{
private:
	int feet;
	float inches;
public:
	// ����������� ��� ����������
	Distance ( );
	// ����������� � ����� �����������
	Distance ( int, float );
	// ��������� ���������� �� ������������
	void getdist ( );
	// ����� ����������
	void showdist ( );
	// �������� ���� ����
	Distance operator+ ( Distance ) const;
	Distance operator- ( Distance ) const;
};