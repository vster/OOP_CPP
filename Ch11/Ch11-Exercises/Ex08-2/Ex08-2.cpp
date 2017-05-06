#include <iostream>
#include <cstring>
using namespace std;
const int LEN = 80;       // ������������ ����� ���������
const int MAX = 40;       //

///////////////////////////////////////////////////////////
class Token
{
public:
	virtual float getNumber() = 0;
	virtual char getOperator() = 0;
};
///////////////////////////////////////////////////////////
class Operator : public Token
{
private:
	char oper;
public:
	Operator(char ch)
	{ oper = ch; }
	char getOperator()
	{ return oper; }
	float getNumber()
	{ return 0; }
};
///////////////////////////////////////////////////////////
class Number : public Token
{
private:
	float fnum;
public:
	Number(float fn)
	{ fnum = fn; }
	float getNumber()
	{ return fnum; }
	char getOperator()
	{ return 0; }
};
///////////////////////////////////////////////////////////
class Stack
{
  private:
    Token* st [ MAX ];      // ������ ������
    int top;              // ���������� ����������� ������
  public:
    Stack ( )              // �����������
      { top = 0; }
    void push ( Token* tkn ) // ��������� � ����
	  {  st [ ++top ] = tkn; }
    Token* pop ( )           // ����� �� �����
      { return st [ top-- ]; }
    int gettop ( )         // ������ ���������� ���������
      { return top; }
};

///////////////////////////////////////////////////////////
int main()
{
	Token* atoken[100];
	Token* tk;
	float num;
	char op, ch;
	Stack s;
	int ntok, nop;
	float lastval;
	char lastop;
	Number* pNum1;
	Operator* pOp1;

	cout << "Enter number of operators: ";
	cin >> nop;
	
	cout << "Enter expression from " << nop << " operators and "
		<< 2*nop+1 << " tokens: ";
	ntok = 0;
	cin >> num;
	atoken[ntok++] = new Number(num);
	
	for (int i = 0; i < nop; i++)
	{
		cin >> op >> num;
		atoken[ntok++] = new Operator(op);	
		atoken[ntok++] = new Number(num);	
	}
	
	for (int j = 0; j < ntok; j++)
	{
		tk = atoken[j];		// ���������, ��� ����� ��� ��������
		ch = tk->getOperator();
		if ( pNum1 = dynamic_cast<Number*>(tk))
			s.push(tk);							// ����� ������� � ����
		else
		if ( pOp1 = dynamic_cast<Operator*>(tk))	// ���� ��� ��������, ��������� ��������
		{
			if ( s.gettop ( ) == 1 )
				s.push(tk);
			else
			{
				lastval = s.pop()->getNumber();
				lastop= s.pop()->getOperator();
				if ( ( ch == '*' || ch == '/' ) && ( lastop == '+' || lastop == '-' ) )
				{
					s.push ( new Operator(lastop) ); // �������� ��������� ��� ������ �� �����
					s.push ( new Number (lastval) );
				}
				else
				{
				// �������� � ���� ��������� ��������
					switch ( lastop )
					{
						case '+': s.push ( new Number(s.pop()->getNumber() + lastval) ); break;
						case '-': s.push ( new Number(s.pop()->getNumber() - lastval) ); break;
						case '*': s.push ( new Number(s.pop()->getNumber() * lastval) ); break;
						case '/': s.push ( new Number(s.pop()->getNumber() / lastval) ); break;
						default: cout << "\nUnknown operator"; exit ( 1 );
					}
				}
				s.push(tk);
			}
		}
	   else               // �����-�� ������...
		{
			cout << "\nUnknown symbol";
			exit ( 1 );
		}
	}

	// ��������� ����, ��� �������� � �����	
	while ( s.gettop ( ) > 1 )
	{
		lastval = s.pop()->getNumber(); // �������� ���������� ��������
		switch ( s.pop()->getOperator() ) // �������� ���������� ��������
		{
			case '+': s.push ( new Number(s.pop()->getNumber() + lastval) ); break;
			case '-': s.push ( new Number(s.pop()->getNumber() - lastval) ); break;
			case '*': s.push ( new Number(s.pop()->getNumber() * lastval) ); break;
			case '/': s.push ( new Number(s.pop()->getNumber() / lastval) ); break;
			default: cout << "\nUnknown operator"; exit ( 1 );
		}
	}
	
	cout << s.pop()->getNumber();

	return 0;
}