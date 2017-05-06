// listpers.cpp
// ������������� ������ ��� �������� �������� person
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
      person() :             // ����������� ��� ����������
           lastName("empty"), firstName("empty"), phoneNumber(0L)
         {  }
                             // ����������� � ����� �����������
      person(string lana, string fina, long pho) :
              lastName(lana), firstName(fina), phoneNumber(pho)
         {  }
      friend bool operator<(const person&, const person&);
      friend bool operator==(const person&, const person&);
      friend bool operator!=(const person&, const person&);
      friend bool operator>(const person&, const person&);

      void display() const   // ����� ���� ������
         {
         cout << endl << lastName << ",\t" << firstName
              << "\t\tPhone: " << phoneNumber;
         }

      long get_phone() const // ������� ����� ��������
         { return phoneNumber; }
   };
                             // ������������� == ��� ������ person
bool operator==(const person& p1, const person& p2)
   {
   return (p1.lastName == p2.lastName &&
           p1.firstName == p2.firstName ) ? true : false;
   }
                             // ������������� < ��� ������ person
bool operator<(const person& p1, const person& p2)
   {
   if(p1.lastName == p2.lastName)
      return (p1.firstName < p2.firstName) ? true : false;
   return (p1.lastName < p2.lastName) ? true : false;
   }
                             // ������������� != ��� ������ person
bool operator!=(const person& p1, const person& p2)
   { return !(p1==p2); }
                             // ������������� > ��� ������ person
bool operator>(const person& p1, const person& p2)
   { return !(p1<p2) && !(p1==p2); }
///////////////////////////////////////////////////////////
int main()
   {
   list<person> persList;    // ������ �������� ���� person
                             // �������� ��� ����� ������
   list<person>::iterator iter1;
                             // ������� ������� � ������
   persList.push_back( person("Deauville", "William", 8435150) );
   persList.push_back( person("McDonald", "Stacey", 3327563) );
   persList.push_back( person("Bartoski", "Peter", 6946473) );
   persList.push_back( person("KuangThu", "Bruce", 4157300) );
   persList.push_back( person("Wellington", "John", 9207404) );
   persList.push_back( person("McDonald", "Amanda", 8435150) );
   persList.push_back( person("Fredericks", "Roger", 7049982) );
   persList.push_back( person("McDonald", "Stacey", 7764987) );

   cout << "\nNumber of records: " << persList.size();

   iter1 = persList.begin(); // ����� ����������� ������
   while( iter1 != persList.end() )
      (*iter1++).display();

                             // ����� ���������� � ����� � ������� 
                             // � ���������, ���������� � �������
   string searchLastName, searchFirstName;
   cout << "\n\nEnter last name of requried person: ";
   cin >> searchLastName;
   cout << "Enter name: ";
   cin >> searchFirstName;
                             //������� ������� � ����� ������
   person searchPerson(searchLastName, searchFirstName, 0L);
      //����� �� ����� ������� ��������� �������� ��������
   iter1 = find(persList.begin(), persList.end(), searchPerson);
   if( iter1 != persList.end() ) //����� ��������� ����������
      {
      cout << "There is such person(s) in the list: ";
      do
         {
         (*iter1).display(); //����� ��������� �������
         ++iter1;            //����������� ������ �� ��������� ������
         iter1 = find(iter1, persList.end(), searchPerson);
         } while( iter1 != persList.end() );
      }
   else
      cout << "There is no such person in the list.";

                             // ����� �������� �� ������ ��������
   cout << "\n\nEnter phone number (format 1234567): ";
   long sNumber;             //�������� ������� �����
   cin >> sNumber;
                             //�������� �� ������
   bool found_one = false;
   for(iter1=persList.begin(); iter1 != persList.end(); ++iter1)
      {
      if( sNumber == (*iter1).get_phone() )  //��������
                                             //������
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


