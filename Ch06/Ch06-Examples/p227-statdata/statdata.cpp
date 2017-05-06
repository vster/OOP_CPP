// statdata.cpp
// статические данные класса
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class foo
{
  private:
    static int count;        // общее поле дл€ всех объектов
                             // (в смысле "объ€влени€")
  public:
    foo()                    // инкрементирование при создании объекта
      { count++; }
    int getcount()           // возвращает значение count
      { return count; }
};
//--------------------------------------------------------
int foo::count = 0;          // *определение* count
//////////////////////////////////////////////////////////
int main()
{
  foo f1, f2, f3;            // создание трех объектов
  // каждый объект видит одно и то же значение
  cout << "Number of objects: " << f1.getcount() << endl;
  cout << "Number of objects: " << f2.getcount() << endl;
  cout << "Number of objects: " << f3.getcount() << endl;
  return 0;
}

