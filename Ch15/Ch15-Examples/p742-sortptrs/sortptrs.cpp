// sortptrs.cpp
// ���������� �������� person, �������� � ���� ����������� //����������
#include <iostream>
#include <vector>
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
      person() :             // ����������� �� ���������
           lastName("empty"), firstName("empty"), phoneNumber(0L)
         {  }
                             // ����������� � ����� �����������
      person(string lana, string fina, long pho) :
              lastName(lana), firstName(fina), phoneNumber(pho)
         {  }
      friend bool operator<(const person&, const person&);
      friend bool operator==(const person&, const person&);
      void display() const   // ����� ������������ ������
         {
         cout << endl << lastName << ",\t" << firstName
              << "\t\tPhone: " << phoneNumber;
         }
      long get_phone() const // ������� ���������� �����
         { return phoneNumber; }
   }; //end class person
//---------------------------------------------------------
// ������������� < ��� ������ person
bool operator<(const person& p1, const person& p2)
   {
   if(p1.lastName == p2.lastName)
      return (p1.firstName < p2.firstName) ? true : false;
   return (p1.lastName < p2.lastName) ? true : false;
   }
//---------------------------------------------------------
// ������������� == ��� ������ person
bool operator==(const person& p1, const person& p2)
   {
   return (p1.lastName == p2.lastName &&
           p1.firstName == p2.firstName ) ? true : false;
   }
//---------------------------------------------------------
// �������������� ������ ��� ����������� ����������� 
//���������� �� ������� person
class comparePersons
   {
   public:
   bool operator() (const person* ptrP1,
                    const person* ptrP2) const
      { return *ptrP1 < *ptrP2; }
   };
//---------------------------------------------------------
//�������������� ������ ��� ������ ������������ ������, 
//�������� � ����������
class displayPerson
   {
   public:
   void operator() (const person* ptrP) const
      { ptrP->display(); }
   };
///////////////////////////////////////////////////////////
int main()
   {                         // ������ ���������� �� ������� person
   vector<person*> vectPtrsPers;
                             //�������� ������������ ������
   person* ptrP1 = new person("KuangThu", "Bruce", 4157300);
   person* ptrP2 = new person("Deauville", "William", 8435150);
   person* ptrP3 = new person("Wellington", "John", 9207404);
   person* ptrP4 = new person("Bartoski", "Peter", 6946473);
   person* ptrP5 = new person("Fredericks", "Roger", 7049982);
   person* ptrP6 = new person("McDonald", "Stacey", 7764987);

   vectPtrsPers.push_back(ptrP1); //�������� ������ ��
                                  //���������
   vectPtrsPers.push_back(ptrP2);
   vectPtrsPers.push_back(ptrP3);
   vectPtrsPers.push_back(ptrP4);
   vectPtrsPers.push_back(ptrP5);
   vectPtrsPers.push_back(ptrP6);

   for_each(vectPtrsPers.begin(), //����� �������
            vectPtrsPers.end(), displayPerson() );
                                  //���������� ����������
   sort( vectPtrsPers.begin(), vectPtrsPers.end() );
   cout << "\n\nArranged pointers:";
   for_each(vectPtrsPers.begin(), //����� �������
            vectPtrsPers.end(), displayPerson() );

   sort( vectPtrsPers.begin(),    //���������� �������� ������
         vectPtrsPers.end(), comparePersons() );
   cout << "\n\nArranged perosnal data:";
   for_each(vectPtrsPers.begin(),  //����� �������
            vectPtrsPers.end(), displayPerson() );
   while( !vectPtrsPers.empty() )               
      {
      delete vectPtrsPers.back(); //�������� �������
      vectPtrsPers.pop_back();    //������������ ���������
      }
   cout << endl;
   return 0;
   }  // ����� main()


