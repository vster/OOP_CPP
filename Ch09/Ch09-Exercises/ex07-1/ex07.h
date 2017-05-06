///////////////////////////////////////////////////////////
class Counter
{
  protected:                         // ��������, ��� ��� �� ������� ������������ private
    unsigned int count;              // �������
  public:
    Counter ( ) : count ( )          // ����������� ��� ����������
      { }
    Counter ( int c ) : count ( c )  // ����������� � ����� ����������
      { }
    unsigned int get_count ( ) const // ��������� ��������
      { return count; }
    Counter operator++ ( )           // �������� ����������
      { return Counter ( ++count ); }
};
///////////////////////////////////////////////////////////
class CountDn : public Counter
{
  public:
    CountDn ( ) : Counter ( )        // ����������� ��� ����������
      { }
    CountDn ( int c ) : Counter ( c )// ����������� � ����� ����������
      { }
    CountDn operator-- ( )           // �������� ����������
      { return CountDn ( --count ); }
};
///////////////////////////////////////////////////////////
class CountPost : public Counter 
{
public:
	CountPost ( ) : Counter ( )
	{ }
	CountPost ( int c ) : Counter ( c )
	{ }
	CountPost operator ++ ( int )
	{
		return CountPost ( count++ );
	}
	CountPost operator -- ( int )
	{
		return CountPost ( count-- );
	}
};