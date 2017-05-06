// opers.cpp
// Сохранение объекта в файле
#include <fstream>        // для файловых потоков
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // класс person
  {
  protected:
    char name[80];        // имя человека
    short age;            // возраст
  public:
    void getData()        // получить данные о человеке
      {
      cout << "Enter name: "; cin >> name;
      cout << "Enter age: "; cin >> age;
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  person pers;            // создать объект
  pers.getData();         // получить данные
                          // создать объект ofstream
  ofstream outfile("PERSON.DAT", ios::binary);
                          // записать в него
  outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));  
  return 0;
  }


