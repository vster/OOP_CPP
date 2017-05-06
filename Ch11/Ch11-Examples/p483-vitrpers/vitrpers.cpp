// vitrpers.cpp
// виртуальные функции и класс person
#include <iostream>
using namespace std;
///////////////////////////////////////////////
class person                    //класс person
{
protected:
      char name[40];
public:
      void getName()
        { cout << "  Enter name: "; cin >> name; }
      void putName()
        { cout << "  Name: " << name << endl; }
      virtual void getData() = 0;      //чистые
      virtual bool isOutstanding() =0; //виртуальные
                                       //функции
};
////////////////////////////////////////////////
class student : public person   //класс student
{
private:
      float gpa;                //средний балл
public:
      void getData()            //запросить данные об ученике у
        {                       //пользователя
        person::getName();
        cout << "  GPA of the student:  "; cin >> gpa;
        }
      bool isOutstanding()
        { return (gpa > 3.5) ? true : false; }
};
////////////////////////////////////////////////
class professor : public person //класс professor
{
private:
	    int numPubs;              //число публикаций
public:
      void getData()            //запросить данные о педагоге у
        {                       //пользователя
        person::getName();
        cout << "  Number of publications:  "; cin >> numPubs;
        }
      bool isOutstanding()
        { return (numPubs > 100) ? true : false; }
};
////////////////////////////////////////////////
int main()
{
  person* persPtr[100];  //массив указателей на person
   int n = 0;            //число людей, внесенных в список char choice;
	char choice;

  do {
    cout << " Student (s) or professor (p): ";
    cin >> choice;
    if(choice=='s' )               //Занести нового ученика 
      persPtr[n] = new student;   // в массив
    else                          //Занести нового
      persPtr[n] = new professor; //педагога в массив
    persPtr[n++]->getData();       //Запрос данных о персоне
    cout << " One more person (y/n)? "; //создать еще
                                           //персону
    cin >> choice;
    } while( choice=='y' );       //цикл, пока ответ 'y'
  
  for( int j=0; j<n; j++)
    {
    persPtr[j]->putName();        //Вывести все имена,
    if( persPtr[j]->isOutstanding() )        //сообщать о 
      cout << "  This is the outstanding person!\n"; //выдающихся
    }
  return 0;
}                      //Конец main()


