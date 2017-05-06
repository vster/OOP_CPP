// newstr.cpp
// использование оператора new для выделения памяти под строку
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
class String
{
  private:
    char* str;          // указатель на строку
  public:
    String ( char* s )  // конструктор с одним параметром
      {
        int length = strlen ( s );     // вычисляем длину строки
        str = new char [ length + 1 ]; // выделяем необходимую память
        strcpy ( str, s );             // копируем строку
      }
    ~String ( )         // деструктор
      {
        cout << "Удаляем строку\n";
        delete [ ] str; // освобождаем память
      }
    void display ( )    // покажем строку на экране
      {
        cout << str << endl;
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  String s1 = "Tishe edesh - dalshe budish.";
  cout << "s1 = ";
  s1.display ( );

  return 0;
}


