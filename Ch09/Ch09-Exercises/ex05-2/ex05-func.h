enum Period {hour, week, mounth};
const int LEN = 80;       // ������������ ����� �����

///////////////////////////////////////////////////////////
class employee            // ����� ���������
{
  private:
    char name[ LEN ];     // ��� ����������
    unsigned long number; // ����� ����������
  public:
    void getdata ( );
    void putdata ( ) const;    
};

///////////////////////////////////////////////////////////
class employee2 : public employee
{
private:
	double compensation;
	Period period;
public:
	void getdata ( );
	void putdata ( ) const;
};
///////////////////////////////////////////////////////////
class manager : public employee2 // ��������
{
  private:
    char title[ LEN ];    // ���������, �������� ����-���������
    double dues;          // ����� ������� � �����-����
  public:
    void getdata ( );
    void putdata ( ) const;      
};
///////////////////////////////////////////////////////////
class scientist : public employee2 // ������
{
  private:
    int pubs;                     // ���������� ����������
  public:
    void getdata ( );
    void putdata ( ) const;  
};
///////////////////////////////////////////////////////////
class laborer : public employee2   // �������
{
};

