// find_if.cpp
// ���� � ������� ���� string ������ ��������� �����
//��������
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//---------------------------------------------------------
bool isDon(string name)      // ���������� true, ����
                             //name=="�������"
   {
   return name == "Dmitr";
   }
//---------------------------------------------------------
string names[] = { "Serge", "Tata", "Elena",
                  "Dmitr", "Miha", "Vlad" };
// string names[] = { "������", "�������", "�����", "�������", "������", "��������" };
int main()
   {
   string* ptr;
   ptr = find_if( names, names+5, isDon );

   if(ptr==names+5)
      cout << "There is no Dmitr in list.\n";
   else
      cout << "Dmitr written in position "
        << (ptr-names)
        << " in list.\n";
   return 0;
   }


