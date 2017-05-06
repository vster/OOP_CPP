#include <fstream>      // для файловых потоков
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class person            // класс person
  {
  protected:
    char name[80];      // имя человека
	char otch[80];
	char family[80];
    int number;            // его номер
  public:
    void getData()      // получить данные о человеке
      {
      cout << "\n  Enter name: "; cin >> name;
	  cout << "  Enter otchestvo: "; cin >> otch;
	  cout << "  Enter family: "; cin >> family;
      cout << "  Enter number: "; cin >> number;
      }
    void showData()     // вывод данных о человеке
      {
      cout << "\n  Name: " << name;
   	  cout << "\n  Otchestvo: " << otch;
	  cout << "\n  Family: " << family;
	  cout << "\n  Number: " << number;
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  char ch;
  person pers;          // создать объект person
  fstream file;         // создать входной/выходной файл
                        // открыть для дозаписи
  file.open("GROUP.DAT", ios::app | ios::out |
                      ios::in | ios::binary );
  do                    // данные от пользователя – в файл
    {
    cout << "\nEnter data about person:";
    pers.getData();     // получить данные
                        // записать их в файл
    file.write( reinterpret_cast<char*>(&pers), sizeof(pers) );
    cout << "Continue (y/n)? ";
    cin >> ch;
    } while(ch=='y');       // выход по 'n'

  file.seekg(0);        // поставить указатель на начало файла
                        // считать данные о первом человеке
  file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
  while( !file.eof() )  // Выход по EOF
    {
    cout << "\nPerson:"; //вывести данные
    pers.showData();      //считать данные о следующем
    file.read(reinterpret_cast<char*>(&pers),sizeof(pers));  
    }
  cout << endl;
  return 0;
  }

