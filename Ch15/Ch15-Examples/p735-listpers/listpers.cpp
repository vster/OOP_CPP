// listpers.cpp
// Использование списка для хранения объектов person
#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

class person
   {
   private:
      string lastName;
      string firstName;
      long phoneNumber;
   public:
      person() :             // конструктор без аргументов
           lastName("empty"), firstName("empty"), phoneNumber(0L)
         {  }
                             // конструктор с тремя аргументами
      person(string lana, string fina, long pho) :
              lastName(lana), firstName(fina), phoneNumber(pho)
         {  }
      friend bool operator<(const person&, const person&);
      friend bool operator==(const person&, const person&);
      friend bool operator!=(const person&, const person&);
      friend bool operator>(const person&, const person&);

      void display() const   // вывод всех данных
         {
         cout << endl << lastName << ",\t" << firstName
              << "\t\tPhone: " << phoneNumber;
         }

      long get_phone() const // вернуть номер телефона
         { return phoneNumber; }
   };
                             // перегруженный == для класса person
bool operator==(const person& p1, const person& p2)
   {
   return (p1.lastName == p2.lastName &&
           p1.firstName == p2.firstName ) ? true : false;
   }
                             // перегруженный < для класса person
bool operator<(const person& p1, const person& p2)
   {
   if(p1.lastName == p2.lastName)
      return (p1.firstName < p2.firstName) ? true : false;
   return (p1.lastName < p2.lastName) ? true : false;
   }
                             // перегруженный != для класса person
bool operator!=(const person& p1, const person& p2)
   { return !(p1==p2); }
                             // перегруженный > для класса person
bool operator>(const person& p1, const person& p2)
   { return !(p1<p2) && !(p1==p2); }
///////////////////////////////////////////////////////////
int main()
   {
   list<person> persList;    // список объектов типа person
                             // итератор для этого списка
   list<person>::iterator iter1;
                             // занести объекты в список
   persList.push_back( person("Deauville", "William", 8435150) );
   persList.push_back( person("McDonald", "Stacey", 3327563) );
   persList.push_back( person("Bartoski", "Peter", 6946473) );
   persList.push_back( person("KuangThu", "Bruce", 4157300) );
   persList.push_back( person("Wellington", "John", 9207404) );
   persList.push_back( person("McDonald", "Amanda", 8435150) );
   persList.push_back( person("Fredericks", "Roger", 7049982) );
   persList.push_back( person("McDonald", "Stacey", 7764987) );

   cout << "\nNumber of records: " << persList.size();

   iter1 = persList.begin(); // вывод содержимого списка
   while( iter1 != persList.end() )
      (*iter1++).display();

                             // найти информацию о людях с именами 
                             // и фамилиями, указанными в запросе
   string searchLastName, searchFirstName;
   cout << "\n\nEnter last name of requried person: ";
   cin >> searchLastName;
   cout << "Enter name: ";
   cin >> searchFirstName;
                             //создать персону с таким именем
   person searchPerson(searchLastName, searchFirstName, 0L);
      //поиск по листу первого вхождения искомого значения
   iter1 = find(persList.begin(), persList.end(), searchPerson);
   if( iter1 != persList.end() ) //поиск следующих совпадений
      {
      cout << "There is such person(s) in the list: ";
      do
         {
         (*iter1).display(); //вывод найденных записей
         ++iter1;            //продолжение поиска со следующей записи
         iter1 = find(iter1, persList.end(), searchPerson);
         } while( iter1 != persList.end() );
      }
   else
      cout << "There is no such person in the list.";

                             // найти человека по номеру телефона
   cout << "\n\nEnter phone number (format 1234567): ";
   long sNumber;             //получить искомый номер
   cin >> sNumber;
                             //итерация по списку
   bool found_one = false;
   for(iter1=persList.begin(); iter1 != persList.end(); ++iter1)
      {
      if( sNumber == (*iter1).get_phone() )  //сравнить
                                             //номера
         {
         if( !found_one )
            {
            cout << "There is such person(s) in the list.";
            found_one = true;
            }
         (*iter1).display(); //display the match
         }
      }  //end for
   if( !found_one )
      cout << "There is no such person in the list.";
   cout << endl;
   return 0;
   }  //end main()


