#include <iostream>
#include <cstring>
using namespace std;
const int LEN = 80;       // максимальна€ длина выражени€
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
    Token* st [ MAX ];      // массив данных
    int top;              // количество сохраненных данных
  public:
    Stack ( )              // конструктор
      { top = 0; }
    void push ( Token* tkn ) // поместить в стек
	  {  st [ ++top ] = tkn; }
    Token* pop ( )           // вз€ть из стека
      { return st [ top-- ]; }
    int gettop ( )         // узнать количество элементов
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
		tk = atoken[j];		// ѕровер€ем, это число или оператор
		ch = tk->getOperator();
		if ( pNum1 = dynamic_cast<Number*>(tk))
			s.push(tk);							// „исло заносим в стек
		else
		if ( pOp1 = dynamic_cast<Operator*>(tk))	// ≈сли это оператор, выполн€ем действи€
		{
			if ( s.gettop ( ) == 1 )
				s.push(tk);
			else
			{
				lastval = s.pop()->getNumber();
				lastop= s.pop()->getOperator();
				if ( ( ch == '*' || ch == '/' ) && ( lastop == '+' || lastop == '-' ) )
				{
					s.push ( new Operator(lastop) ); // отмен€ем последние два вз€ти€ из стека
					s.push ( new Number (lastval) );
				}
				else
				{
				// помещаем в стек результат операции
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
	   else               // кака€-то ерунда...
		{
			cout << "\nUnknown symbol";
			exit ( 1 );
		}
	}

	// ќбработка того, что осталось в стеке	
	while ( s.gettop ( ) > 1 )
	{
		lastval = s.pop()->getNumber(); // получаем предыдущее значение
		switch ( s.pop()->getOperator() ) // получаем предыдущий оператор
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