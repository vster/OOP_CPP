#include <iostream>
#include <cstring>
using namespace std;
const int LEN = 80;       // максимальная длина выражения
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
	Operator()
	{}
	Operator(char ch)
	{ oper = ch; }
	char getOperator()
	{ cin >> oper; return oper; }
	float getNumber()
	{ return 0;}
};
///////////////////////////////////////////////////////////
class Number : public Token
{
private:
	float fnum;
public:
	Number()
	{}
	Number(float f)
	{ fnum = f; }
	float getNumber()
	{ cin >> fnum; return fnum;}
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
    Token* pop ( )           // взять из стека
      { return st [ top-- ]; }
    int gettop ( )         // узнать количество элементов
      { return top; }
};

int main()
{
	Token* atoken[100];
	int nop, ntok;
	Stack s;
	Token* tk;
	Token* lastval;
	Token* lastop;
	Number* pNum1;
	Operator* pOp1;


	cout << "Enter number of operations: ";
	cin >> nop;
	
	cout << "Enter expression with " 
		<< nop << " operations: ";
	ntok = 0;
	atoken[ntok] = new Number;
	atoken[ntok++]->getNumber();
	
	for (int i = 0; i < nop; i++)
	{
		atoken[ntok] = new Operator;
		atoken[ntok++]->getOperator();
		atoken[ntok] = new Number;
		atoken[ntok++]->getNumber();
	}

/*
	for (int j = 0; j < ntok; j++)
	{
		tk = atoken[j];
		if ( pNum1 = dynamic_cast<Number*>(tk))
			s.push(tk);
		else
		if ( pOp1 = dynamic_cast<Operator*>(tk))
			cout << "O" << endl;
	}
*/

	tk = atoken[0];
	s.push(tk);
	
	tk = atoken[1];
	s.push(tk);

	tk = atoken[2];
	s.push(tk);



/*
	for ( int i = 0; i < ntok; i++)
		s.push(atoken[i]);

	for ( int i = 0; i < ntok; i++)
		tk = s.pop();
*/

	return 0;
}