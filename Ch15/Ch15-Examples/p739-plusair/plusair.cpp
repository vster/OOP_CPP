//plusair.cpp
//������������� ��������� accumulate() � ��������������� //������� plus()
#include <iostream>
#include <list>
#include <numeric>           //��� accumulate()
using namespace std;
///////////////////////////////////////////////////////////
class airtime
   {
   private:
      int hours;             //�� 0 �� 23
      int minutes;           //�� 0 �� 59
   public:
                             //����������� �� ���������
      airtime() : hours(0), minutes(0)
         {  }
                             //����������� � ����� �����������
      airtime(int h, int m) : hours(h), minutes(m)
         {  }
      void display() const   //����� �� �����
         { cout << hours << ':' << minutes; }

      void get()             //���� ������ �������������
         {
         char dummy;
         cout << "\nEnter time (format 12:59): ";
         cin >> hours >> dummy >> minutes;
         }
                             //������������� �������� +
      airtime operator + (const airtime right) const
         {                   //�������� ����������
         int temph = hours + right.hours;
         int tempm = minutes + right.minutes;
         if(tempm >= 60)     //�������� ������� ��������
            { temph++; tempm -= 60; }
         return airtime(temph, tempm); //������� �����
         }
                             //�������������  �������� ==
      bool operator == (const airtime& at2) const
         { return (hours == at2.hours) &&
                  (minutes == at2.minutes); }
                             //�������������  �������� <
      bool operator < (const airtime& at2) const
         { return (hours < at2.hours) ||
                  (hours == at2.hours && minutes < at2.minutes); }
                             //������������� �������� !=
      bool operator != (const airtime& at2) const
         { return !(*this==at2); }
                             //������������� �������� >
      bool operator > (const airtime& at2) const
         { return !(*this<at2) && !(*this==at2); }
   };                        //����� ������ airtime
///////////////////////////////////////////////////////////
int main()
   {
   char answer;
   airtime temp, sum;
   list<airtime> airlist;    //������ ���� airtime

   do {                      //�������� �������� �� ������������
      temp.get();
      airlist.push_back(temp);
      cout << "Continue (y/n)? ";
      cin >> answer;
      } while (answer != 'n');
                             //����������� ��� ��������
   sum = accumulate( airlist.begin(), airlist.end(),
                     airtime(0, 0), plus<airtime>() );
   cout << "\nSum = ";
   sum.display();            //����� ����� �� �����
   cout << endl;
   return 0;
   }


