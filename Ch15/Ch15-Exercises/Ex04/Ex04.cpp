// sortptrs.cpp
// сортировка объектов person, хранимых в виде содержимого //указателей
#include <iostream>
#include <vector>
#include <set>
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
      person() :             // конструктор по умолчанию
           lastName("empty"), firstName("empty"), phoneNumber(0L)
         {  }
                             // конструктор с тремя аргументами
      person(string lana, string fina, long pho) :
              lastName(lana), firstName(fina), phoneNumber(pho)
         {  }
      friend bool operator<(const person&, const person&);
/*
	  void display() const
	  {
	  cout << endl << lastname << ".\t" << firstname 
		  << "\t \tPhone:" << phoneNumber;
	  }
*/
      friend bool operator==(const person&, const person&);
  
	  void display() const   // вывод персональных данных
         {
         cout << endl << lastName << ",\t" << firstName
              << "\t\tPhone: " << phoneNumber;
         }
      long get_phone() const // вернуть телефонный номер
         { return phoneNumber; }
   }; //end class person
//---------------------------------------------------------
// перегруженный < для класса person
bool operator<(const person& p1, const person& p2)
   {
   if(p1.lastName == p2.lastName)
      return (p1.firstName < p2.firstName) ? true : false;
   return (p1.lastName < p2.lastName) ? true : false;
   }
//---------------------------------------------------------
// перегруженный == для класса person
bool operator==(const person& p1, const person& p2)
   {
   return (p1.lastName == p2.lastName &&
           p1.firstName == p2.firstName ) ? true : false;
   }
//---------------------------------------------------------
// функциональный объект для сравнивания содержимого 
//указателей на объекты person
class comparePersons
   {
   public:
   bool operator() (const person* ptrP1,
                    const person* ptrP2) const
      { return *ptrP1 < *ptrP2; }
   };
//---------------------------------------------------------
//функциональный объект для вывода персональных данных, 
//хранимых в указателях
class displayPerson
   {
   public:
   void operator() (const person* ptrP) const
      { ptrP->display(); }
   };
///////////////////////////////////////////////////////////
int main()
   {                         // мультимножество указателей на объекты person
	multiset <person*,comparePersons>setPtrPers;
	multiset <person*,comparePersons>::iterator iter;
                             //создание персональных данных
   person* ptrP1 = new person("KuangThu", "Bruce", 4157300);
   person* ptrP2 = new person("Deauville", "William", 8435150);
   person* ptrP3 = new person("Wellington", "John", 9207404);
   person* ptrP4 = new person("Bartoski", "Peter", 6946473);
   person* ptrP5 = new person("Fredericks", "Roger", 7049982);
   person* ptrP6 = new person("McDonald", "Stacey", 7764987);
   person* ptrP7 = new person("Bartoski", "Peter", 4576653);
   person* ptrP8 = new person("Deauville", "William", 5644677);

   setPtrPers.insert(ptrP1);
   setPtrPers.insert(ptrP2);
   setPtrPers.insert(ptrP3);
   setPtrPers.insert(ptrP4);
   setPtrPers.insert(ptrP5);
   setPtrPers.insert(ptrP6);
   setPtrPers.insert(ptrP7);
   setPtrPers.insert(ptrP8);

   cout << "\n\nSet ordered from initian:";
   for (iter = setPtrPers.begin(); iter != setPtrPers.end(); iter++)
	   (**iter).display();

   iter = setPtrPers.begin();
   while ( iter != setPtrPers.end())
   {
		delete *iter;
		setPtrPers.erase(iter++);
   }
   cout << endl;

   return 0;
   }  // конец main()


