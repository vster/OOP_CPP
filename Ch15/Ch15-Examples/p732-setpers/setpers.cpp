// setpers.cpp
// ���������� ��������������� ��� �������� �������� person
#pragma warning (disable:4786)     // ��� �������� (���
                                   // ������������ ����� Microsoft)
#include <iostream>
#include <set>
#include <string>
using namespace std;

class person
   {
   private:
      string lastName;
      string firstName;
      long phoneNumber;
   public:                         // ����������� �� ���������
      person() : lastName("empty"),
                 firstName("empty"), phoneNumber(0)
         {  }
                                   // ����������� � ����� �����������
      person(string lana, string fina, long pho) :
              lastName(lana), firstName(fina), phoneNumber(pho)
         {  }
      friend bool operator<(const person&, const person&);
      friend bool operator==(const person&, const person&);

      void display() const         // ����� ������ � �����
         {
         cout << endl << lastName << ",\t" << firstName
              << "\t\tPhone: " << phoneNumber;
         }
   };
                                   // �������� < ��� ������ person
bool operator<(const person& p1, const person& p2)
   {
   if(p1.lastName == p2.lastName)
      return (p1.firstName < p2.firstName) ? true : false;
   return (p1.lastName < p2.lastName) ? true : false;
   }
                                   // �������� == ��� ������ person
bool operator==(const person& p1, const person& p2)
   {
   return (p1.lastName == p2.lastName &&
           p1.firstName == p2.firstName ) ? true : false;
   }
///////////////////////////////////////////////////////////
int main()
   {                               // �������� �������� person
   person pers1("Deauville", "William", 8435150);
   person pers2("McDonald", "Stacey", 3327563);
   person pers3("Bartoski", "Peter", 6946473);
   person pers4("KuangThu", "Bruce", 4157300);
   person pers5("Wellington", "John", 9207404);
   person pers6("McDonald", "Amanda", 8435150);
   person pers7("Fredericks", "Roger", 7049982);
   person pers8("McDonald", "Stacey", 7764987);
                                   // ��������������� ������ person
   multiset< person, less<person> > persSet;
                                   // �������� ����� ���������������
   multiset<person, less<person> >::iterator iter;

   persSet.insert(pers1);          // ������� ������� person �
                                   //���������������
   persSet.insert(pers2);
   persSet.insert(pers3);
   persSet.insert(pers4);
   persSet.insert(pers5);
   persSet.insert(pers6);
   persSet.insert(pers7);
   persSet.insert(pers8);

   cout << "\nNumber of records: " << persSet.size();

   iter = persSet.begin();         //����� �����������
                                   //  ���������������
   while( iter != persSet.end() )
      (*iter++).display();
                                   // ��������� ����� � �������
   string searchLastName, searchFirstName;
   cout << "\n\nEnter last name of required person: ";
   cin >> searchLastName;
   cout << "Enter name: ";
   cin >> searchFirstName;
        // �������� ������� � ��������� ���������� ���������
   person searchPerson(searchLastName, searchFirstName, 0);
        // ��������� ���������� ����� � ����� ������
   int cntPersons = persSet.count(searchPerson);
   cout << "Number of persons with such name: " << cntPersons;

        // ������� ��� ������, ���������� �������
   iter = persSet.lower_bound(searchPerson);
   while( iter != persSet.upper_bound(searchPerson) )
      (*iter++).display();
   cout << endl;
   return 0;
   }    // end main()


