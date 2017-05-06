///////////////////////////////////////////////////////////
class Counter
{
  protected:                         // заметьте, что тут не следует использовать private
    unsigned int count;              // счетчик
  public:
    Counter ( ) : count ( )          // конструктор без параметров
      { }
    Counter ( int c ) : count ( c )  // конструктор с одним параметром
      { }
    unsigned int get_count ( ) const // получение значения
      { return count; }
    Counter operator++ ( )           // оператор увеличения
      { return Counter ( ++count ); }
};
///////////////////////////////////////////////////////////
class CountDn : public Counter
{
  public:
    CountDn ( ) : Counter ( )        // конструктор без параметров
      { }
    CountDn ( int c ) : Counter ( c )// конструктор с одним параметром
      { }
    CountDn operator-- ( )           // оператор уменьшения
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