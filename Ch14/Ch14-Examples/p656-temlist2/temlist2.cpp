// temlist2.cpp
// связный список с использованием шаблона
// список, умеющий работать с классом employee
#include <iostream>
using namespace std;

const int LEN = 80;       //Максимальная длина имен
///////////////////////////////////////////////////////////
class employee            //класс employee
  {
  private:
    char name[LEN];       //имя работника
    unsigned long number; //номер работника
  public:
    friend istream& operator >> (istream& s, employee& e);
    friend ostream& operator << (ostream& s, employee& e);
  };
//---------------------------------------------------------
istream& operator >> (istream& s, employee& e)
  {
  cout << "\n  Enter name: "; cin >> e.name;
  cout << "  Enter number: ";    cin >> e.number;
  return s;
  }
//---------------------------------------------------------
ostream& operator << (ostream& s, employee& e)
  {
  cout << "\n  Name: " << e.name;
  cout << "\n  Number: " << e.number;
  return s;
  }
///////////////////////////////////////////////////////////
template<class TYPE>      //структура "link<TYPE>"
struct link               //один элемент списка
  {
  TYPE data;              //элемент данных
  link* next;             //указатель на следующую ссылку
  };
///////////////////////////////////////////////////////////
template<class TYPE>      //класс "linklist<TYPE>"
class linklist            //список ссылок
  {
  private:
    link<TYPE>* first;    //указатель на первую ссылку
  public:
    linklist()            //конструктор без аргументов
      { first = NULL; }   //первой ссылки нет
    void additem(TYPE d); //добавить данные (одну ссылку)
    void display();       //показать все ссылки
  };
//---------------------------------------------------------
template<class TYPE>
void linklist<TYPE>::additem(TYPE d) //добавить данные
  {
  link<TYPE>* newlink=new link<TYPE>;//создать новую ссылку
  newlink->data = d;                 //внести в нее данные
  newlink->next = first;             //указывающие на следующую ссылку
  first = newlink;  //теперь первая ссылка указывает на эту
  }
//---------------------------------------------------------
template<class TYPE>
void linklist<TYPE>::display()  //вывод всех ссылок
  {
  link<TYPE>* current = first;  //установить указатель на
                                //первую ссылку
  while( current != NULL )      //выйти после последней ссылки
    {
    cout << endl << current->data; //вывести данные
    current = current->next;       //перейти на следующую ссылку
    }
  }
///////////////////////////////////////////////////////////
int main()
  {                          //lemp – объект класса
  linklist<employee> lemp;   //"linklist<employee>"
  employee emptemp;          //временное хранилище объектов
  char ans;                  //ответ пользователя ('y' или 'n')

  do
    {
    cin >> emptemp;         //получить данные от пользователя
    lemp.additem(emptemp);  //добавить в emptemp
    cout << "\nContinue (y/n)? ";
    cin >> ans;
    } while(ans != 'n');    //при окончании ввода 
  lemp.display();           //вывести весь связный список
  cout << endl;
  return 0;
  }


