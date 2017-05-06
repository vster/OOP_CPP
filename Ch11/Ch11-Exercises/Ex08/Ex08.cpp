// parse.cpp
// программа разбора арифметических выражений
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
	Operator(char);
	char getOperator();
	float getNumber();
};
///////////////////////////////////////////////////////////
class Number : public Token
{
private:
	float fnum;
	Number(float);
	float getNumber();
	char getOperator();
};

///////////////////////////////////////////////////////////
class Stack
{
  private:
    char st [ MAX ];      // массив данных
    int top;              // количество сохраненных данных
  public:
    Stack ( )              // конструктор
      { top = 0; }
    void push ( char var ) // поместить в стек
      { st [ ++top ] = var; }
    char pop ( )           // взять из стека
      { return st [ top-- ]; }
    int gettop ( )         // узнать количество элементов
      { return top; }
};
///////////////////////////////////////////////////////////
class express
{
  private:
    Stack s;                   // стек данных
    char* pStr;                // строка для ввода
    int len;                   // длина строки
  public:
    express ( char* ptr )      // конструктор
      {
        pStr = ptr;            // запоминаем указатель на строку
        len = strlen ( pStr ); // устанавливаем длину
      }
    void parse ( );            // разбор выражения
    int solve ( );             // получение результата
};
///////////////////////////////////////////////////////////
void express::parse ( ) // добавляем данные в стек
{
  char ch;              // символ из строки
  char lastval;         // последнее значение
  char lastop;          // последний оператор

  for ( int j = 0; j < len; j++ ) // для всех символов в строке
  {
    ch = pStr [ j ];    // получаем символ

    if ( ch >= '0' && ch <= '9' ) // если это цифра,
      s.push ( ch - '0' );        // то сохраняем ее значение
    else
    if ( ch == '+' || ch == '-' || ch == '*' || ch == '/' )
    {
      if ( s.gettop ( ) == 1 ) // если это первый оператор,
        s.push ( ch );         // помещаем его в стек
      else // иначе
      {
        lastval = s.pop ( ); // получаем предыдущее число
        lastop = s.pop ( );  // получаем предыдущий оператор
        // если это * или /, а предыдущий был + или -, то
        if ( ( ch == '*' || ch == '/' ) && ( lastop == '+' || lastop == '-' ) )
        {
          s.push ( lastop ); // отменяем последние два взятия из стека
          s.push ( lastval );
        }
        else
        {
          // помещаем в стек результат операции
          switch ( lastop )
          {
            case '+': s.push ( s.pop ( ) + lastval ); break;
            case '-': s.push ( s.pop ( ) - lastval ); break;
            case '*': s.push ( s.pop ( ) * lastval ); break;
            case '/': s.push ( s.pop ( ) / lastval ); break;
            default: cout << "\nUnknown operator"; exit ( 1 );
          }
        }
        s.push ( ch ); // помещаем в стек текущий оператор
      }
    }
    else               // какая-то ерунда...
    {
      cout << "\nUnknown symbol";
      exit ( 1 );
    }
  }
}
///////////////////////////////////////////////////////////
int express::solve ( ) // убираем данные из стека
{
  char lastval;        // предыдущее значение

  while ( s.gettop ( ) > 1 )
  {
    lastval = s.pop ( ); // получаем предыдущее значение
    switch ( s.pop ( ) ) // получаем предыдущий оператор
    {
      case '+': s.push ( s.pop ( ) + lastval ); break;
      case '-': s.push ( s.pop ( ) - lastval ); break;
      case '*': s.push ( s.pop ( ) * lastval ); break;
      case '/': s.push ( s.pop ( ) / lastval ); break;
      default: cout << "\nНеизвестный оператор"; exit ( 1 );
    }
  }
  return int ( s.pop ( ) ); // последний оператор в стеке – это результат
}
///////////////////////////////////////////////////////////
int main ( )
{
  char ans;            // 'д' или 'н'
  char string [ LEN ]; // строка для разбора

  cout << "\nEnter ariphmetic expression in such manner 2+3*4/3-2"
          "\nNumbers must be from one digit"
          "\nDon't use spaces and braces";

  do
  {
    cout << "\nExpression: ";
    cin >> string;                          // вводим строку
    express* eptr = new express ( string ); // создаем объект для разбора
    eptr->parse ( );                        // разбираем
    cout << "\nResult: "
         << eptr->solve ( );                // решаем
    delete eptr;                            // удаляем объект
    cout << "\nOne more (y/n)? ";
    cin >> ans;
  }
  while ( ans == 'y' );
  return 0;
}


