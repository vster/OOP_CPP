// staken.cpp
// перегрузка функций базового и производного классов
#include <iostream>
using namespace std;
#include <process.h>      // для exit ( )



///////////////////////////////////////////////////////////
class Stack
{
  protected:              // Замечание: использовать private нельзя
    enum { MAX = 20 };     // размер стека
    int st[ MAX ];        // данные, хранящиеся в стеке
    int top;              // индекс последнего элемента в стеке
  public:
    Stack ( )            // конструктор
      { top = -1; }
    void push ( int var ) // помещение числа в стек
      { st[ ++top ] = var; }
    int pop ( )           // извлечение числа из стека
      { return st[ top-- ]; }
};
///////////////////////////////////////////////////////////
class Stack2 : public Stack
{
  public:
    void push ( int var )      // помещение числа в стек
      {
        if ( top >= MAX - 1 )  // если стек полон, то ошибка
          { cout << "\nError: stack full"; exit ( 1 ); }
        Stack::push ( var );   // вызов функции push класса Stack
      }
    int pop ( )                // извлечение числа из стека
      {
        if ( top < 0 )         // если стек пуст, то ошибка
          { cout << "\nError: stack empty\n"; exit ( 1 ); }
        return Stack::pop ( ); // вызов функции pop класса Stack
      }
};

struct pairxy
{
	int x;
	int y;
};

class pairStack : public Stack2
{
public:
	void push ( pairxy pp )
	{
		Stack2::push(pp.x);
		Stack2::push(pp.y);
	}
	pairxy pop ( )
	{
		pairxy tp;
		tp.y = Stack2::pop ();
		tp.x = Stack2::pop ();
		return tp;
	}
};

///////////////////////////////////////////////////////////
int main ( )
{
	pairStack ps1;
	pairxy p1 ={1,1}, p2 ={2,2}, p3 ={3,3};	
	pairxy p4, p5, p6, p7;
  
  ps1.push ( p1 ); // поместим в стек несколько чисел
  ps1.push ( p2 );
  ps1.push ( p3 );

  p4 = ps1.pop ( ); // заберем числа из стека
  p5 = ps1.pop ( );
  p6 = ps1.pop ( );
  p7 = ps1.pop ( ); // ой, а данных-то больше нет
  return 0;
}


